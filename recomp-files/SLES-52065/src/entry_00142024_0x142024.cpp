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

// Function: entry_00142024
// Address: 0x142024 - 0x142070
void entry_00142024_0x142024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142024_0x142024");
#endif

    ctx->pc = 0x142024u;

    // 0x142024: 0x0  nop
    ctx->pc = 0x142024u;
    // NOP
    // 0x142028: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x142028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x14202c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x14202cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x142030: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x142030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x142034: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x142034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x142038: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x142038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14203c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x14203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x142040: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x142040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x142044: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x142044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x142048: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x142048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x14204c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x14204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x142050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x142050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x142054: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x142054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x142058: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x142058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14205c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x14205cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x142060: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x142060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x142064: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x142064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x142068: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x142068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x14206c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x14206cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x142070u;
}
