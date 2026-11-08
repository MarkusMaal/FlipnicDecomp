#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001cc140
// Address: 0x1cc140 - 0x1cc190
void entry_001cc140_0x1cc140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc140_0x1cc140");
#endif

    ctx->pc = 0x1cc140u;

    // 0x1cc140: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc144: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x1cc144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cc148: 0x8c29ca84  lw          $t1, -0x357C($at)
    ctx->pc = 0x1cc148u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cc14c: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1cc14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1cc150: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1cc150u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cc154: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1cc154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cc158: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1cc158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cc15c: 0x12c3821  addu        $a3, $t1, $t4
    ctx->pc = 0x1cc15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1cc160: 0xe45821  addu        $t3, $a3, $a0
    ctx->pc = 0x1cc160u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cc164: 0xdd640060  ld          $a0, 0x60($t3)
    ctx->pc = 0x1cc164u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 96)));
    // 0x1cc168: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x1cc168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cc16c: 0x256e0060  addiu       $t6, $t3, 0x60
    ctx->pc = 0x1cc16cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 96));
    // 0x1cc170: 0x24ed0060  addiu       $t5, $a3, 0x60
    ctx->pc = 0x1cc170u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1cc174: 0x25ca0010  addiu       $t2, $t6, 0x10
    ctx->pc = 0x1cc174u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x1cc178: 0x25a90010  addiu       $t1, $t5, 0x10
    ctx->pc = 0x1cc178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x1cc17c: 0xfce40060  sd          $a0, 0x60($a3)
    ctx->pc = 0x1cc17cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 96), GPR_U64(ctx, 4));
    // 0x1cc180: 0x8d640068  lw          $a0, 0x68($t3)
    ctx->pc = 0x1cc180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 104)));
    // 0x1cc184: 0xace40068  sw          $a0, 0x68($a3)
    ctx->pc = 0x1cc184u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 4));
    // 0x1cc188: 0x8d64006c  lw          $a0, 0x6C($t3)
    ctx->pc = 0x1cc188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 108)));
    // 0x1cc18c: 0xace4006c  sw          $a0, 0x6C($a3)
    ctx->pc = 0x1cc18cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 4));
    ctx->pc = 0x1cc190u;
}
