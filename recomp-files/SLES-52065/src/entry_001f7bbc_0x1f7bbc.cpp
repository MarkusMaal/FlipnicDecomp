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

// Function: entry_001f7bbc
// Address: 0x1f7bbc - 0x1f7c14
void entry_001f7bbc_0x1f7bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7bbc_0x1f7bbc");
#endif

    switch (ctx->pc) {
        case 0x1f7bd4u: goto label_1f7bd4;
        case 0x1f7c00u: goto label_1f7c00;
        default: break;
    }

    ctx->pc = 0x1f7bbcu;

    // 0x1f7bbc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7BBCu;
    {
        const bool branch_taken_0x1f7bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BBCu;
        // 0x1f7bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bbc) {
            ctx->pc = 0x1F7C14u;
            return;
        }
    }
    ctx->pc = 0x1F7BC4u;
    // 0x1f7bc4: 0xae1315c0  sw          $s3, 0x15C0($s0)
    ctx->pc = 0x1f7bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5568), GPR_U32(ctx, 19));
    // 0x1f7bc8: 0xae80bb50  sw          $zero, -0x44B0($s4)
    ctx->pc = 0x1f7bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294949712), GPR_U32(ctx, 0));
    // 0x1f7bcc: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F7BCCu;
    SET_GPR_U32(ctx, 31, 0x1F7BD4u);
    ctx->pc = 0x1F7BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7BCCu;
    // 0x1f7bd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F7BCCu, 0x1F7BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BD4u;
label_1f7bd4:
    // 0x1f7bd4: 0x27d0cd00  addiu       $s0, $fp, -0x3300
    ctx->pc = 0x1f7bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954240));
    // 0x1f7bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bdc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f7bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7be0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f7be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bec: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7bf0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f7bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bf4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1f7bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f7bf8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F7BF8u;
    SET_GPR_U32(ctx, 31, 0x1F7C00u);
    ctx->pc = 0x1F7BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7BF8u;
    // 0x1f7bfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F7BF8u, 0x1F7C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7C00u;
label_1f7c00:
    // 0x1f7c00: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F7C00u;
    {
        const bool branch_taken_0x1f7c00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C00u;
        // 0x1f7c04: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c00) {
            ctx->pc = 0x1F7C44u;
            return;
        }
    }
    ctx->pc = 0x1F7C08u;
    // 0x1f7c08: 0xac40bb24  sw          $zero, -0x44DC($v0)
    ctx->pc = 0x1f7c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949668), GPR_U32(ctx, 0));
    // 0x1f7c0c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1F7C0Cu;
    {
        const bool branch_taken_0x1f7c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C0Cu;
        // 0x1f7c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c0c) {
            ctx->pc = 0x1F7D40u;
            return;
        }
    }
    ctx->pc = 0x1F7C14u;
}
