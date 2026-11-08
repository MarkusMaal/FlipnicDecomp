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

// Function: FUN_001f71a0
// Address: 0x1f71a0 - 0x1f7214
void FUN_001f71a0_0x1f71a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f71a0_0x1f71a0");
#endif

    switch (ctx->pc) {
        case 0x1f71d0u: goto label_1f71d0;
        case 0x1f71d8u: goto label_1f71d8;
        case 0x1f71f8u: goto label_1f71f8;
        default: break;
    }

    ctx->pc = 0x1f71a0u;

    // 0x1f71a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f71a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f71a4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f71a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f71a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f71ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f71acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f71b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f71b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71b4: 0x8c43bb40  lw          $v1, -0x44C0($v0)
    ctx->pc = 0x1f71b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BB40u));
    // 0x1f71b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f71b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f71bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f71c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F71C0u;
    {
        const bool branch_taken_0x1f71c0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71C0u;
        // 0x1f71c4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71c0) {
            ctx->pc = 0x1F71D0u;
            goto label_1f71d0;
        }
    }
    ctx->pc = 0x1F71C8u;
    // 0x1f71c8: 0xc07dc96  jal         func_1F7258
    ctx->pc = 0x1F71C8u;
    SET_GPR_U32(ctx, 31, 0x1F71D0u);
    ctx->pc = 0x1F7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7258u, 0x1F71C8u, 0x1F71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71D0u;
label_1f71d0:
    // 0x1f71d0: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1F71D0u;
    SET_GPR_U32(ctx, 31, 0x1F71D8u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1F71D0u, 0x1F71D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71D8u;
label_1f71d8:
    // 0x1f71d8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f71d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f71dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f71e0: 0x8c901344  lw          $s0, 0x1344($a0)
    ctx->pc = 0x1f71e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x391344u));
    // 0x1f71e4: 0xac711348  sw          $s1, 0x1348($v1)
    ctx->pc = 0x1f71e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x391348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x391348u, _value); } while (0);
    // 0x1f71e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F71E8u;
    {
        const bool branch_taken_0x1f71e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71E8u;
        // 0x1f71ec: 0xac921344  sw          $s2, 0x1344($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71e8) {
            ctx->pc = 0x1F71F8u;
            goto label_1f71f8;
        }
    }
    ctx->pc = 0x1F71F0u;
    // 0x1f71f0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1F71F0u;
    SET_GPR_U32(ctx, 31, 0x1F71F8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1F71F0u, 0x1F71F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71F8u;
label_1f71f8:
    // 0x1f71f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f71f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f71fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7200: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f7200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7204: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f7204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f720c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F720Cu;
        // 0x1f7210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F720Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7214u;
}
