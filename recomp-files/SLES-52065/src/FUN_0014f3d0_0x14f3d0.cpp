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

// Function: FUN_0014f3d0
// Address: 0x14f3d0 - 0x14f43c
void FUN_0014f3d0_0x14f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f3d0_0x14f3d0");
#endif

    switch (ctx->pc) {
        case 0x14f400u: goto label_14f400;
        case 0x14f40cu: goto label_14f40c;
        case 0x14f424u: goto label_14f424;
        default: break;
    }

    ctx->pc = 0x14f3d0u;

    // 0x14f3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f3d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f3d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f3dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f3e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3e4: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x14F3E4u;
    {
        const bool branch_taken_0x14f3e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3E4u;
        // 0x14f3e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3e4) {
            ctx->pc = 0x14F424u;
            goto label_14f424;
        }
    }
    ctx->pc = 0x14F3ECu;
    // 0x14f3ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x14f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x14f3f0: 0x24429440  addiu       $v0, $v0, -0x6BC0
    ctx->pc = 0x14f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x14f3f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14f3f8: 0xc04018c  jal         func_100630
    ctx->pc = 0x14F3F8u;
    SET_GPR_U32(ctx, 31, 0x14F400u);
    ctx->pc = 0x14F3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3F8u;
    // 0x14f3fc: 0x8e24011c  lw          $a0, 0x11C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x14F3F8u, 0x14F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F400u;
label_14f400:
    // 0x14f400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f404: 0xc04dd5c  jal         func_137570
    ctx->pc = 0x14F404u;
    SET_GPR_U32(ctx, 31, 0x14F40Cu);
    ctx->pc = 0x14F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F404u;
    // 0x14f408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137570u, 0x14F404u, 0x14F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F40Cu;
label_14f40c:
    // 0x14f40c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x14f40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x14f410: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14f410u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14f414: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F414u;
    {
        const bool branch_taken_0x14f414 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F414u;
        // 0x14f418: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f414) {
            ctx->pc = 0x14F428u;
            goto label_14f428;
        }
    }
    ctx->pc = 0x14F41Cu;
    // 0x14f41c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14F41Cu;
    SET_GPR_U32(ctx, 31, 0x14F424u);
    ctx->pc = 0x14F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F41Cu;
    // 0x14f420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14F41Cu, 0x14F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F424u;
label_14f424:
    // 0x14f424: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14f424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14f428:
    // 0x14f428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f42c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f434: 0x3e00008  jr          $ra
    ctx->pc = 0x14F434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F434u;
        // 0x14f438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F43Cu;
}
