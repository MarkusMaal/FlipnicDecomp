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

// Function: entry_001d1438
// Address: 0x1d1438 - 0x1d1494
void entry_001d1438_0x1d1438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1438_0x1d1438");
#endif

    switch (ctx->pc) {
        case 0x1d1440u: goto label_1d1440;
        case 0x1d144cu: goto label_1d144c;
        case 0x1d145cu: goto label_1d145c;
        case 0x1d1470u: goto label_1d1470;
        case 0x1d1478u: goto label_1d1478;
        case 0x1d1484u: goto label_1d1484;
        default: break;
    }

    ctx->pc = 0x1d1438u;

    // 0x1d1438: 0xc06d354  jal         func_1B4D50
    ctx->pc = 0x1D1438u;
    SET_GPR_U32(ctx, 31, 0x1D1440u);
    ctx->pc = 0x1B4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D50u, 0x1D1438u, 0x1D1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1440u;
label_1d1440:
    // 0x1d1440: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d1440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d1444: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1D1444u;
    SET_GPR_U32(ctx, 31, 0x1D144Cu);
    ctx->pc = 0x1D1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1444u;
    // 0x1d1448: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1D1444u, 0x1D144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D144Cu;
label_1d144c:
    // 0x1d144c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d144cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d1450: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1454: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1D1454u;
    SET_GPR_U32(ctx, 31, 0x1D145Cu);
    ctx->pc = 0x1D1458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1454u;
    // 0x1d1458: 0x24a59a40  addiu       $a1, $a1, -0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1D1454u, 0x1D145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D145Cu;
label_1d145c:
    // 0x1d145c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d145cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d1460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1464: 0x24a59a50  addiu       $a1, $a1, -0x65B0
    ctx->pc = 0x1d1464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941264));
    // 0x1d1468: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1D1468u;
    SET_GPR_U32(ctx, 31, 0x1D1470u);
    ctx->pc = 0x1D146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1468u;
    // 0x1d146c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1D1468u, 0x1D1470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1470u;
label_1d1470:
    // 0x1d1470: 0xc04d988  jal         func_136620
    ctx->pc = 0x1D1470u;
    SET_GPR_U32(ctx, 31, 0x1D1478u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1D1470u, 0x1D1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1478u;
label_1d1478:
    // 0x1d1478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d147c: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1D147Cu;
    SET_GPR_U32(ctx, 31, 0x1D1484u);
    ctx->pc = 0x1D1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D147Cu;
    // 0x1d1480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1D147Cu, 0x1D1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1484u;
label_1d1484:
    // 0x1d1484: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d1484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d148c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D148Cu;
    {
        const bool branch_taken_0x1d148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D148Cu;
        // 0x1d1490: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d148c) {
            ctx->pc = 0x1D14E8u;
            return;
        }
    }
    ctx->pc = 0x1D1494u;
}
