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

// Function: entry_001dcf20
// Address: 0x1dcf20 - 0x1dcf58
void entry_001dcf20_0x1dcf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcf20_0x1dcf20");
#endif

    ctx->pc = 0x1dcf20u;

    // 0x1dcf20: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1dcf20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1dcf24: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1dcf24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1dcf28: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x1dcf28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1dcf2c: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x1dcf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x1dcf30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dcf30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dcf34: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1dcf34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1dcf38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1dcf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dcf3c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dcf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dcf40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1dcf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1dcf44: 0x24217330  addiu       $at, $at, 0x7330
    ctx->pc = 0x1dcf44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29488));
    // 0x1dcf48: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1dcf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1dcf4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dcf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcf50: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1dcf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1dcf54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dcf54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1dcf58u;
}
