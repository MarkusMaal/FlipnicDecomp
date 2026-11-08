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

// Function: entry_001d13cc
// Address: 0x1d13cc - 0x1d1410
void entry_001d13cc_0x1d13cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d13cc_0x1d13cc");
#endif

    switch (ctx->pc) {
        case 0x1d13d4u: goto label_1d13d4;
        case 0x1d13e4u: goto label_1d13e4;
        case 0x1d13f8u: goto label_1d13f8;
        case 0x1d1400u: goto label_1d1400;
        default: break;
    }

    ctx->pc = 0x1d13ccu;

    // 0x1d13cc: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1D13CCu;
    SET_GPR_U32(ctx, 31, 0x1D13D4u);
    ctx->pc = 0x1D13D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13CCu;
    // 0x1d13d0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1D13CCu, 0x1D13D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D13D4u;
label_1d13d4:
    // 0x1d13d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d13d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d13d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d13d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13dc: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1D13DCu;
    SET_GPR_U32(ctx, 31, 0x1D13E4u);
    ctx->pc = 0x1D13E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13DCu;
    // 0x1d13e0: 0x24a59a50  addiu       $a1, $a1, -0x65B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1D13DCu, 0x1D13E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D13E4u;
label_1d13e4:
    // 0x1d13e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d13e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d13e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d13e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d13ec: 0x24a59a40  addiu       $a1, $a1, -0x65C0
    ctx->pc = 0x1d13ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
    // 0x1d13f0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1D13F0u;
    SET_GPR_U32(ctx, 31, 0x1D13F8u);
    ctx->pc = 0x1D13F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D13F0u;
    // 0x1d13f4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1D13F0u, 0x1D13F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D13F8u;
label_1d13f8:
    // 0x1d13f8: 0xc06d328  jal         func_1B4CA0
    ctx->pc = 0x1D13F8u;
    SET_GPR_U32(ctx, 31, 0x1D1400u);
    ctx->pc = 0x1B4CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CA0u, 0x1D13F8u, 0x1D1400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1400u;
label_1d1400:
    // 0x1d1400: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1408: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1D1408u;
    {
        const bool branch_taken_0x1d1408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1408u;
        // 0x1d140c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1408) {
            ctx->pc = 0x1D14E8u;
            return;
        }
    }
    ctx->pc = 0x1D1410u;
}
