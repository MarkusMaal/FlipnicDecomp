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

// Function: FUN_001d93a8
// Address: 0x1d93a8 - 0x1d9460
void FUN_001d93a8_0x1d93a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d93a8_0x1d93a8");
#endif

    switch (ctx->pc) {
        case 0x1d93f4u: goto label_1d93f4;
        case 0x1d9418u: goto label_1d9418;
        case 0x1d9424u: goto label_1d9424;
        case 0x1d9430u: goto label_1d9430;
        case 0x1d9440u: goto label_1d9440;
        default: break;
    }

    ctx->pc = 0x1d93a8u;

    // 0x1d93a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d93a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d93ac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d93acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d93b0: 0x2c830020  sltiu       $v1, $a0, 0x20
    ctx->pc = 0x1d93b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d93b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d93b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d93b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d93b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d93bc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1d93bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d93c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d93c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d93c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d93c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d93c8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D93C8u;
    {
        const bool branch_taken_0x1d93c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93C8u;
        // 0x1d93cc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93c8) {
            ctx->pc = 0x1D9440u;
            goto label_1d9440;
        }
    }
    ctx->pc = 0x1D93D0u;
    // 0x1d93d0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d93d4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1d93d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d93d8: 0x245366c0  addiu       $s3, $v0, 0x66C0
    ctx->pc = 0x1d93d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
    // 0x1d93dc: 0x2139021  addu        $s2, $s0, $s3
    ctx->pc = 0x1d93dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1d93e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d93e4: 0x58400017  blezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D93E4u;
    {
        const bool branch_taken_0x1d93e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d93e4) {
            ctx->pc = 0x1D93E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D93E4u;
            // 0x1d93e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9444u;
            goto label_1d9444;
        }
    }
    ctx->pc = 0x1D93ECu;
    // 0x1d93ec: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D93ECu;
    SET_GPR_U32(ctx, 31, 0x1D93F4u);
    ctx->pc = 0x1D93F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93ECu;
    // 0x1d93f0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D93ECu, 0x1D93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93F4u;
label_1d93f4:
    // 0x1d93f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d93f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d93f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9400: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1d9400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1d9404: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1d9404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1d9408: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1d9408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1d940c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1d940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d9410: 0xc075446  jal         func_1D5118
    ctx->pc = 0x1D9410u;
    SET_GPR_U32(ctx, 31, 0x1D9418u);
    ctx->pc = 0x1D9414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9410u;
    // 0x1d9414: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5118u, 0x1D9410u, 0x1D9418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9418u;
label_1d9418:
    // 0x1d9418: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d9418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d941c: 0xc075446  jal         func_1D5118
    ctx->pc = 0x1D941Cu;
    SET_GPR_U32(ctx, 31, 0x1D9424u);
    ctx->pc = 0x1D9420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D941Cu;
    // 0x1d9420: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5118u, 0x1D941Cu, 0x1D9424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9424u;
label_1d9424:
    // 0x1d9424: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d9424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9428: 0xc075446  jal         func_1D5118
    ctx->pc = 0x1D9428u;
    SET_GPR_U32(ctx, 31, 0x1D9430u);
    ctx->pc = 0x1D942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9428u;
    // 0x1d942c: 0x240500f7  addiu       $a1, $zero, 0xF7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5118u, 0x1D9428u, 0x1D9430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9430u;
label_1d9430:
    // 0x1d9430: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9430u;
    {
        const bool branch_taken_0x1d9430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9430) {
            ctx->pc = 0x1D9434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9430u;
            // 0x1d9434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9444u;
            goto label_1d9444;
        }
    }
    ctx->pc = 0x1D9438u;
    // 0x1d9438: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D9438u;
    SET_GPR_U32(ctx, 31, 0x1D9440u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D9438u, 0x1D9440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9440u;
label_1d9440:
    // 0x1d9440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9444:
    // 0x1d9444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d944c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d944cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9450: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9458: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9458u;
        // 0x1d945c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9460u;
}
