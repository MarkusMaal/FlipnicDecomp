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

// Function: FUN_001066a0
// Address: 0x1066a0 - 0x106730
void FUN_001066a0_0x1066a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001066a0_0x1066a0");
#endif

    switch (ctx->pc) {
        case 0x106700u: goto label_106700;
        case 0x106718u: goto label_106718;
        default: break;
    }

    ctx->pc = 0x1066a0u;

    // 0x1066a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1066a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1066a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1066a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1066a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1066a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1066ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1066acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1066b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1066b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066b4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1066B4u;
    {
        const bool branch_taken_0x1066b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1066B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066B4u;
        // 0x1066b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066b4) {
            ctx->pc = 0x106718u;
            goto label_106718;
        }
    }
    ctx->pc = 0x1066BCu;
    // 0x1066bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1066bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1066c0: 0x24427ab0  addiu       $v0, $v0, 0x7AB0
    ctx->pc = 0x1066c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31408));
    // 0x1066c4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1066C4u;
    {
        const bool branch_taken_0x1066c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1066C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066C4u;
        // 0x1066c8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066c4) {
            ctx->pc = 0x106700u;
            goto label_106700;
        }
    }
    ctx->pc = 0x1066CCu;
    // 0x1066cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1066ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1066d0: 0x2442a430  addiu       $v0, $v0, -0x5BD0
    ctx->pc = 0x1066d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x1066d4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1066D4u;
    {
        const bool branch_taken_0x1066d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1066D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066D4u;
        // 0x1066d8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066d4) {
            ctx->pc = 0x106700u;
            goto label_106700;
        }
    }
    ctx->pc = 0x1066DCu;
    // 0x1066dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1066dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1066e0: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x1066e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x1066e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1066E4u;
    {
        const bool branch_taken_0x1066e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1066E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1066E4u;
        // 0x1066e8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066e4) {
            ctx->pc = 0x106700u;
            goto label_106700;
        }
    }
    ctx->pc = 0x1066ECu;
    // 0x1066ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1066ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1066f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1066f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066f4: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x1066f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x1066f8: 0xc041750  jal         func_105D40
    ctx->pc = 0x1066F8u;
    SET_GPR_U32(ctx, 31, 0x106700u);
    ctx->pc = 0x1066FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1066F8u;
    // 0x1066fc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D40u, 0x1066F8u, 0x106700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106700u;
label_106700:
    // 0x106700: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x106700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x106704: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106704u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106708: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106708u;
    {
        const bool branch_taken_0x106708 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106708u;
        // 0x10670c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106708) {
            ctx->pc = 0x10671Cu;
            goto label_10671c;
        }
    }
    ctx->pc = 0x106710u;
    // 0x106710: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106710u;
    SET_GPR_U32(ctx, 31, 0x106718u);
    ctx->pc = 0x106714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106710u;
    // 0x106714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106710u, 0x106718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106718u;
label_106718:
    // 0x106718: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10671c:
    // 0x10671c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106728: 0x3e00008  jr          $ra
    ctx->pc = 0x106728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106728u;
        // 0x10672c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106730u;
}
