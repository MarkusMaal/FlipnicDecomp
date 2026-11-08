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

// Function: entry_001a5478
// Address: 0x1a5478 - 0x1a54c0
void entry_001a5478_0x1a5478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5478_0x1a5478");
#endif

    switch (ctx->pc) {
        case 0x1a5484u: goto label_1a5484;
        case 0x1a5490u: goto label_1a5490;
        case 0x1a549cu: goto label_1a549c;
        case 0x1a54a8u: goto label_1a54a8;
        default: break;
    }

    ctx->pc = 0x1a5478u;

    // 0x1a5478: 0x26240930  addiu       $a0, $s1, 0x930
    ctx->pc = 0x1a5478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2352));
    // 0x1a547c: 0xc0699c8  jal         func_1A6720
    ctx->pc = 0x1A547Cu;
    SET_GPR_U32(ctx, 31, 0x1A5484u);
    ctx->pc = 0x1A5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A547Cu;
    // 0x1a5480: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6720u, 0x1A547Cu, 0x1A5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5484u;
label_1a5484:
    // 0x1a5484: 0x26240890  addiu       $a0, $s1, 0x890
    ctx->pc = 0x1a5484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x1a5488: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A5488u;
    SET_GPR_U32(ctx, 31, 0x1A5490u);
    ctx->pc = 0x1A548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5488u;
    // 0x1a548c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A5488u, 0x1A5490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5490u;
label_1a5490:
    // 0x1a5490: 0x262407f0  addiu       $a0, $s1, 0x7F0
    ctx->pc = 0x1a5490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2032));
    // 0x1a5494: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A5494u;
    SET_GPR_U32(ctx, 31, 0x1A549Cu);
    ctx->pc = 0x1A5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5494u;
    // 0x1a5498: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A5494u, 0x1A549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A549Cu;
label_1a549c:
    // 0x1a549c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a54a0: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A54A0u;
    SET_GPR_U32(ctx, 31, 0x1A54A8u);
    ctx->pc = 0x1A54A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A54A0u;
    // 0x1a54a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A54A0u, 0x1A54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A54A8u;
label_1a54a8:
    // 0x1a54a8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a54a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a54ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a54acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a54b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A54B0u;
    {
        const bool branch_taken_0x1a54b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54B0u;
        // 0x1a54b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54b0) {
            ctx->pc = 0x1A54C4u;
            return;
        }
    }
    ctx->pc = 0x1A54B8u;
    // 0x1a54b8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A54B8u;
    SET_GPR_U32(ctx, 31, 0x1A54C0u);
    ctx->pc = 0x1A54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A54B8u;
    // 0x1a54bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A54B8u, 0x1A54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A54C0u;
}
