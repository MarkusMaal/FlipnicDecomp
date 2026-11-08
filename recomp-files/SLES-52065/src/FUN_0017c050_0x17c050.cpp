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

// Function: FUN_0017c050
// Address: 0x17c050 - 0x17c0d8
void FUN_0017c050_0x17c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c050_0x17c050");
#endif

    switch (ctx->pc) {
        case 0x17c09cu: goto label_17c09c;
        case 0x17c0a8u: goto label_17c0a8;
        case 0x17c0c0u: goto label_17c0c0;
        default: break;
    }

    ctx->pc = 0x17c050u;

    // 0x17c050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17c058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c05c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c064: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17C064u;
    {
        const bool branch_taken_0x17c064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C064u;
        // 0x17c068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c064) {
            ctx->pc = 0x17C0C0u;
            goto label_17c0c0;
        }
    }
    ctx->pc = 0x17C06Cu;
    // 0x17c06c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17c070: 0x2442aee0  addiu       $v0, $v0, -0x5120
    ctx->pc = 0x17c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946528));
    // 0x17c074: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x17C074u;
    {
        const bool branch_taken_0x17c074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C074u;
        // 0x17c078: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c074) {
            ctx->pc = 0x17C0A8u;
            goto label_17c0a8;
        }
    }
    ctx->pc = 0x17C07Cu;
    // 0x17c07c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17c080: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x17c080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x17c084: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x17c084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x17c088: 0x8e240228  lw          $a0, 0x228($s1)
    ctx->pc = 0x17c088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x17c08c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C08Cu;
    {
        const bool branch_taken_0x17c08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c08c) {
            ctx->pc = 0x17C09Cu;
            goto label_17c09c;
        }
    }
    ctx->pc = 0x17C094u;
    // 0x17c094: 0xc04018c  jal         func_100630
    ctx->pc = 0x17C094u;
    SET_GPR_U32(ctx, 31, 0x17C09Cu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x17C094u, 0x17C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C09Cu;
label_17c09c:
    // 0x17c09c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0a0: 0xc04187c  jal         func_1061F0
    ctx->pc = 0x17C0A0u;
    SET_GPR_U32(ctx, 31, 0x17C0A8u);
    ctx->pc = 0x17C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0A0u;
    // 0x17c0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061F0u, 0x17C0A0u, 0x17C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0A8u;
label_17c0a8:
    // 0x17c0a8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17c0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17c0ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17c0acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17c0b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C0B0u;
    {
        const bool branch_taken_0x17c0b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0B0u;
        // 0x17c0b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0b0) {
            ctx->pc = 0x17C0C4u;
            goto label_17c0c4;
        }
    }
    ctx->pc = 0x17C0B8u;
    // 0x17c0b8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17C0B8u;
    SET_GPR_U32(ctx, 31, 0x17C0C0u);
    ctx->pc = 0x17C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0B8u;
    // 0x17c0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17C0B8u, 0x17C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0C0u;
label_17c0c0:
    // 0x17c0c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17c0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c0c4:
    // 0x17c0c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c0c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0D0u;
        // 0x17c0d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C0D8u;
}
