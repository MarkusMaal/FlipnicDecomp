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

// Function: entry_00112390
// Address: 0x112390 - 0x1123c4
void entry_00112390_0x112390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112390_0x112390");
#endif

    ctx->pc = 0x112390u;

    // 0x112390: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x112390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x112394: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x112398: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x112398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11239c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1123a0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1123a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1123a4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1123a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1123a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1123a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1123ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1123acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1123b0: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x1123b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1123b4: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x1123b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
    // 0x1123b8: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x1123b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1123bc: 0x3463002c  ori         $v1, $v1, 0x2C
    ctx->pc = 0x1123bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44);
    // 0x1123c0: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x1123c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
    ctx->pc = 0x1123c4u;
}
