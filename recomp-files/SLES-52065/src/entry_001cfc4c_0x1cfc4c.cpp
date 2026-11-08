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

// Function: entry_001cfc4c
// Address: 0x1cfc4c - 0x1cfc84
void entry_001cfc4c_0x1cfc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfc4c_0x1cfc4c");
#endif

    switch (ctx->pc) {
        case 0x1cfc64u: goto label_1cfc64;
        case 0x1cfc70u: goto label_1cfc70;
        case 0x1cfc7cu: goto label_1cfc7c;
        default: break;
    }

    ctx->pc = 0x1cfc4cu;

    // 0x1cfc4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfc50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cfc54: 0xac22f4d8  sw          $v0, -0xB28($at)
    ctx->pc = 0x1cfc54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4D8u, _value); } while (0);
    // 0x1cfc58: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfc5c: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFC5Cu;
    SET_GPR_U32(ctx, 31, 0x1CFC64u);
    ctx->pc = 0x1CFC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC5Cu;
    // 0x1cfc60: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFC5Cu, 0x1CFC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC64u;
label_1cfc64:
    // 0x1cfc64: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfc68: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFC68u;
    SET_GPR_U32(ctx, 31, 0x1CFC70u);
    ctx->pc = 0x1CFC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC68u;
    // 0x1cfc6c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFC68u, 0x1CFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC70u;
label_1cfc70:
    // 0x1cfc70: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfc74: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFC74u;
    SET_GPR_U32(ctx, 31, 0x1CFC7Cu);
    ctx->pc = 0x1CFC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC74u;
    // 0x1cfc78: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFC74u, 0x1CFC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC7Cu;
label_1cfc7c:
    // 0x1cfc7c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1CFC7Cu;
    {
        const bool branch_taken_0x1cfc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC7Cu;
        // 0x1cfc80: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc7c) {
            ctx->pc = 0x1CFD68u;
            return;
        }
    }
    ctx->pc = 0x1CFC84u;
}
