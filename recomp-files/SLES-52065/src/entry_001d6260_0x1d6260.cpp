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

// Function: entry_001d6260
// Address: 0x1d6260 - 0x1d62bc
void entry_001d6260_0x1d6260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6260_0x1d6260");
#endif

    switch (ctx->pc) {
        case 0x1d6270u: goto label_1d6270;
        case 0x1d627cu: goto label_1d627c;
        case 0x1d62a4u: goto label_1d62a4;
        default: break;
    }

    ctx->pc = 0x1d6260u;

label_1d6260:
    // 0x1d6260: 0x263109e4  addiu       $s1, $s1, 0x9E4
    ctx->pc = 0x1d6260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2532));
    // 0x1d6264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6268: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1D6268u;
    SET_GPR_U32(ctx, 31, 0x1D6270u);
    ctx->pc = 0x1D626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6268u;
    // 0x1d626c: 0x240609e4  addiu       $a2, $zero, 0x9E4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1D6268u, 0x1D6270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6270u;
label_1d6270:
    // 0x1d6270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6274: 0xc07532c  jal         func_1D4CB0
    ctx->pc = 0x1D6274u;
    SET_GPR_U32(ctx, 31, 0x1D627Cu);
    ctx->pc = 0x1D6278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6274u;
    // 0x1d6278: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4CB0u, 0x1D6274u, 0x1D627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D627Cu;
label_1d627c:
    // 0x1d627c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x1d627cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d6280: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D6280u;
    {
        const bool branch_taken_0x1d6280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6280u;
        // 0x1d6284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6280) {
            ctx->pc = 0x1D6260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6260;
        }
    }
    ctx->pc = 0x1D6288u;
    // 0x1d6288: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1d6288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1d628c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1d628cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1d6290: 0x24a55318  addiu       $a1, $a1, 0x5318
    ctx->pc = 0x1d6290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21272));
    // 0x1d6294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6298: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d6298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d629c: 0xc074bee  jal         func_1D2FB8
    ctx->pc = 0x1D629Cu;
    SET_GPR_U32(ctx, 31, 0x1D62A4u);
    ctx->pc = 0x1D62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D629Cu;
    // 0x1d62a0: 0xac6241d8  sw          $v0, 0x41D8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16856), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FB8u, 0x1D629Cu, 0x1D62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62A4u;
label_1d62a4:
    // 0x1d62a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d62a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d62a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d62ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d62acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d62b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d62b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d62b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D62B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62B4u;
        // 0x1d62b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D62B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D62BCu;
}
