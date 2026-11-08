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

// Function: FUN_001d8bc0
// Address: 0x1d8bc0 - 0x1d8c50
void FUN_001d8bc0_0x1d8bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8bc0_0x1d8bc0");
#endif

    switch (ctx->pc) {
        case 0x1d8c08u: goto label_1d8c08;
        case 0x1d8c3cu: goto label_1d8c3c;
        default: break;
    }

    ctx->pc = 0x1d8bc0u;

    // 0x1d8bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8bc4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1d8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1d8bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8bcc: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1d8bccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1d8bd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8bd4: 0x26104200  addiu       $s0, $s0, 0x4200
    ctx->pc = 0x1d8bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16896));
    // 0x1d8bd8: 0x24634240  addiu       $v1, $v1, 0x4240
    ctx->pc = 0x1d8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16960));
    // 0x1d8bdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384200u));
    // 0x1d8be0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d8be4: 0x625021  addu        $t2, $v1, $v0
    ctx->pc = 0x1d8be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d8be8: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x1d8be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8bec: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1d8becu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bf0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x1d8bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x1d8bf4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x1d8bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8bf8: 0xad250004  sw          $a1, 0x4($t1)
    ctx->pc = 0x1d8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 5));
    // 0x1d8bfc: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1d8bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1d8c00: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D8C00u;
    SET_GPR_U32(ctx, 31, 0x1D8C08u);
    ctx->pc = 0x1D8C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C00u;
    // 0x1d8c04: 0xad47000c  sw          $a3, 0xC($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D8C00u, 0x1D8C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C08u;
label_1d8c08:
    // 0x1d8c08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d8c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8c0c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1d8c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d8c10: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x1d8c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1d8c14: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x1d8c14u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d8c18: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1d8c18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c1c: 0x86180b  movn        $v1, $a0, $a2
    ctx->pc = 0x1d8c1cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1d8c20: 0x31a43  sra         $v1, $v1, 9
    ctx->pc = 0x1d8c20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 9));
    // 0x1d8c24: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x1d8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x1d8c28: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1d8c28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d8c2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8C2Cu;
    {
        const bool branch_taken_0x1d8c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C2Cu;
        // 0x1d8c30: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c2c) {
            ctx->pc = 0x1D8C3Cu;
            goto label_1d8c3c;
        }
    }
    ctx->pc = 0x1D8C34u;
    // 0x1d8c34: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D8C34u;
    SET_GPR_U32(ctx, 31, 0x1D8C3Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D8C34u, 0x1D8C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C3Cu;
label_1d8c3c:
    // 0x1d8c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8c40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8c48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C48u;
        // 0x1d8c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8C50u;
}
