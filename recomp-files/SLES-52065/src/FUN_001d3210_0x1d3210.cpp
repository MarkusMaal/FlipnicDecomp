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

// Function: FUN_001d3210
// Address: 0x1d3210 - 0x1d3274
void FUN_001d3210_0x1d3210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3210_0x1d3210");
#endif

    switch (ctx->pc) {
        case 0x1d322cu: goto label_1d322c;
        case 0x1d325cu: goto label_1d325c;
        default: break;
    }

    ctx->pc = 0x1d3210u;

    // 0x1d3210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d321c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3220: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3224: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D3224u;
    SET_GPR_U32(ctx, 31, 0x1D322Cu);
    ctx->pc = 0x1D3228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3224u;
    // 0x1d3228: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D3224u, 0x1D322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D322Cu;
label_1d322c:
    // 0x1d322c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d322cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d3230: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d3230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d3234: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d3234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d3238: 0x24840448  addiu       $a0, $a0, 0x448
    ctx->pc = 0x1d3238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1096));
    // 0x1d323c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d323cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d3240: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d3240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d3244: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d3244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3248: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1d3248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d324c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D324Cu;
    {
        const bool branch_taken_0x1d324c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D324Cu;
        // 0x1d3250: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d324c) {
            ctx->pc = 0x1D325Cu;
            goto label_1d325c;
        }
    }
    ctx->pc = 0x1D3254u;
    // 0x1d3254: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D3254u;
    SET_GPR_U32(ctx, 31, 0x1D325Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D3254u, 0x1D325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D325Cu;
label_1d325c:
    // 0x1d325c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d325cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d326c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D326Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D326Cu;
        // 0x1d3270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D326Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3274u;
}
