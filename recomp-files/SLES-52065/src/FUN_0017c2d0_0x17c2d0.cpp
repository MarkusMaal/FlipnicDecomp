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

// Function: FUN_0017c2d0
// Address: 0x17c2d0 - 0x17c314
void FUN_0017c2d0_0x17c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c2d0_0x17c2d0");
#endif

    switch (ctx->pc) {
        case 0x17c2d0u: goto label_17c2d0;
        case 0x17c2d4u: goto label_17c2d4;
        case 0x17c2d8u: goto label_17c2d8;
        case 0x17c2dcu: goto label_17c2dc;
        case 0x17c2e0u: goto label_17c2e0;
        case 0x17c2e4u: goto label_17c2e4;
        case 0x17c2e8u: goto label_17c2e8;
        case 0x17c2ecu: goto label_17c2ec;
        case 0x17c2f0u: goto label_17c2f0;
        case 0x17c2f4u: goto label_17c2f4;
        case 0x17c2f8u: goto label_17c2f8;
        case 0x17c2fcu: goto label_17c2fc;
        case 0x17c300u: goto label_17c300;
        case 0x17c304u: goto label_17c304;
        case 0x17c308u: goto label_17c308;
        case 0x17c30cu: goto label_17c30c;
        case 0x17c310u: goto label_17c310;
        default: break;
    }

    ctx->pc = 0x17c2d0u;

label_17c2d0:
    // 0x17c2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17c2d4:
    // 0x17c2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17c2d8:
    // 0x17c2d8: 0x84830210  lh          $v1, 0x210($a0)
    ctx->pc = 0x17c2d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 528)));
label_17c2dc:
    // 0x17c2dc: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_17c2e0:
    if (ctx->pc == 0x17C2E0u) {
        ctx->pc = 0x17C2E4u;
        goto label_17c2e4;
    }
    ctx->pc = 0x17C2DCu;
    {
        const bool branch_taken_0x17c2dc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17c2dc) {
            ctx->pc = 0x17C308u;
            goto label_17c308;
        }
    }
    ctx->pc = 0x17C2E4u;
label_17c2e4:
    // 0x17c2e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17c2e8:
    // 0x17c2e8: 0xa4830210  sh          $v1, 0x210($a0)
    ctx->pc = 0x17c2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 528), (uint16_t)GPR_U32(ctx, 3));
label_17c2ec:
    // 0x17c2ec: 0x84830210  lh          $v1, 0x210($a0)
    ctx->pc = 0x17c2ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 528)));
label_17c2f0:
    // 0x17c2f0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_17c2f4:
    if (ctx->pc == 0x17C2F4u) {
        ctx->pc = 0x17C2F8u;
        goto label_17c2f8;
    }
    ctx->pc = 0x17C2F0u;
    {
        const bool branch_taken_0x17c2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c2f0) {
            ctx->pc = 0x17C308u;
            goto label_17c308;
        }
    }
    ctx->pc = 0x17C2F8u;
label_17c2f8:
    // 0x17c2f8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x17c2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17c2fc:
    // 0x17c2fc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17c2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17c300:
    // 0x17c300: 0x320f809  jalr        $t9
label_17c304:
    if (ctx->pc == 0x17C304u) {
        ctx->pc = 0x17C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C300u;
        // 0x17c304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C308u;
        goto label_17c308;
    }
    ctx->pc = 0x17C300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17C308u);
        ctx->pc = 0x17C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C300u;
        // 0x17c304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C300u, 0x17C308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C308u;
label_17c308:
    // 0x17c308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17c30c:
    // 0x17c30c: 0x3e00008  jr          $ra
label_17c310:
    if (ctx->pc == 0x17C310u) {
        ctx->pc = 0x17C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C30Cu;
        // 0x17c310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C314u;
        goto label_fallthrough_0x17c30c;
    }
    ctx->pc = 0x17C30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C30Cu;
        // 0x17c310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17c30c:
    ctx->pc = 0x17C314u;
}
