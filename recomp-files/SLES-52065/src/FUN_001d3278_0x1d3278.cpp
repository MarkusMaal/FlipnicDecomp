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

// Function: FUN_001d3278
// Address: 0x1d3278 - 0x1d32dc
void FUN_001d3278_0x1d3278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3278_0x1d3278");
#endif

    switch (ctx->pc) {
        case 0x1d3294u: goto label_1d3294;
        case 0x1d32c4u: goto label_1d32c4;
        default: break;
    }

    ctx->pc = 0x1d3278u;

    // 0x1d3278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d327c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3280: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d328c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D328Cu;
    SET_GPR_U32(ctx, 31, 0x1D3294u);
    ctx->pc = 0x1D3290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D328Cu;
    // 0x1d3290: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D328Cu, 0x1D3294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3294u;
label_1d3294:
    // 0x1d3294: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d3294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d3298: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d3298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d329c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d329cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d32a0: 0x24840448  addiu       $a0, $a0, 0x448
    ctx->pc = 0x1d32a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1096));
    // 0x1d32a4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d32a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d32a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d32ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d32acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d32b0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1d32b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d32b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D32B4u;
    {
        const bool branch_taken_0x1d32b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32B4u;
        // 0x1d32b8: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32b4) {
            ctx->pc = 0x1D32C4u;
            goto label_1d32c4;
        }
    }
    ctx->pc = 0x1D32BCu;
    // 0x1d32bc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D32BCu;
    SET_GPR_U32(ctx, 31, 0x1D32C4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D32BCu, 0x1D32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D32C4u;
label_1d32c4:
    // 0x1d32c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d32c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d32c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d32cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d32ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d32d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d32d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d32d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D32D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32D4u;
        // 0x1d32d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D32D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D32DCu;
}
