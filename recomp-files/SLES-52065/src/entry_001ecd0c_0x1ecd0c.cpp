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

// Function: entry_001ecd0c
// Address: 0x1ecd0c - 0x1ecd68
void entry_001ecd0c_0x1ecd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecd0c_0x1ecd0c");
#endif

    switch (ctx->pc) {
        case 0x1ecd60u: goto label_1ecd60;
        default: break;
    }

    ctx->pc = 0x1ecd0cu;

    // 0x1ecd0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ecd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ecd10: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1ecd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1ecd14: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ecd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ecd18: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x1ecd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x1ecd1c: 0x2442c400  addiu       $v0, $v0, -0x3C00
    ctx->pc = 0x1ecd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1ecd20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ecd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ecd24: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1ecd24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1ecd28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ecd28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ecd2c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1ecd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1ecd30: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1ecd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1ecd34: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x1ecd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1ecd38: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1ecd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1ecd3c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1ecd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1ecd40: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1ecd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ecd44: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1ecd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ecd48: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x1ecd48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2038C404u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2038C404u, _value); } while (0);
    // 0x1ecd4c: 0xa0450006  sb          $a1, 0x6($v0)
    ctx->pc = 0x1ecd4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x2038C406u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2038C406u, _value); } while (0);
    // 0x1ecd50: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x1ecd50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2038C407u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2038C407u, _value); } while (0);
    // 0x1ecd54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ecd54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2038C408u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2038C408u, _value); } while (0);
    // 0x1ecd58: 0xc07b218  jal         func_1EC860
    ctx->pc = 0x1ECD58u;
    SET_GPR_U32(ctx, 31, 0x1ECD60u);
    ctx->pc = 0x1ECD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD58u;
    // 0x1ecd5c: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC860u, 0x1ECD58u, 0x1ECD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD60u;
label_1ecd60:
    // 0x1ecd60: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1ecd60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1ecd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ecd68u;
}
