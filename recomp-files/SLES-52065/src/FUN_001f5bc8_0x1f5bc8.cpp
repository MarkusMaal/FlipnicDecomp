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

// Function: FUN_001f5bc8
// Address: 0x1f5bc8 - 0x1f5c48
void FUN_001f5bc8_0x1f5bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5bc8_0x1f5bc8");
#endif

    switch (ctx->pc) {
        case 0x1f5c10u: goto label_1f5c10;
        default: break;
    }

    ctx->pc = 0x1f5bc8u;

    // 0x1f5bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f5bcc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f5bd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f5bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f5bd4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1f5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f5bd8: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x1f5bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1f5bdc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f5bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f5be0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f5be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f5be4: 0x24841080  addiu       $a0, $a0, 0x1080
    ctx->pc = 0x1f5be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x1f5be8: 0xac4312c0  sw          $v1, 0x12C0($v0)
    ctx->pc = 0x1f5be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3912C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C0u, _value); } while (0);
    // 0x1f5bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5bf0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f5bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f5bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5bf8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f5bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5bfc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f5bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f5c00: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f5c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c04: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f5c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f5c08: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F5C08u;
    SET_GPR_U32(ctx, 31, 0x1F5C10u);
    ctx->pc = 0x1F5C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C08u;
    // 0x1f5c0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F5C08u, 0x1F5C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C10u;
label_1f5c10:
    // 0x1f5c10: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5C10u;
    {
        const bool branch_taken_0x1f5c10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f5c10) {
            ctx->pc = 0x1F5C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5C10u;
            // 0x1f5c14: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5C20u;
            goto label_1f5c20;
        }
    }
    ctx->pc = 0x1F5C18u;
    // 0x1f5c18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5C18u;
    {
        const bool branch_taken_0x1f5c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C18u;
        // 0x1f5c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c18) {
            ctx->pc = 0x1F5C38u;
            goto label_1f5c38;
        }
    }
    ctx->pc = 0x1F5C20u;
label_1f5c20:
    // 0x1f5c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c24: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5C24u;
    {
        const bool branch_taken_0x1f5c24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C24u;
        // 0x1f5c28: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c24) {
            ctx->pc = 0x1F5C38u;
            goto label_1f5c38;
        }
    }
    ctx->pc = 0x1F5C2Cu;
    // 0x1f5c2c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f5c30: 0xac40bab0  sw          $zero, -0x4550($v0)
    ctx->pc = 0x1f5c30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21BAB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BAB0u, _value); } while (0);
    // 0x1f5c34: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1f5c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c38:
    // 0x1f5c38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f5c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5c3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f5c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C40u;
        // 0x1f5c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5C48u;
}
