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

// Function: entry_001d3740
// Address: 0x1d3740 - 0x1d3780
void entry_001d3740_0x1d3740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3740_0x1d3740");
#endif

    switch (ctx->pc) {
        case 0x1d3764u: goto label_1d3764;
        default: break;
    }

    ctx->pc = 0x1d3740u;

label_1d3740:
    // 0x1d3740: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d3740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d3744: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d3744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d3748: 0x0  nop
    ctx->pc = 0x1d3748u;
    // NOP
    // 0x1d374c: 0x0  nop
    ctx->pc = 0x1d374cu;
    // NOP
    // 0x1d3750: 0x0  nop
    ctx->pc = 0x1d3750u;
    // NOP
    // 0x1d3754: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D3754u;
    {
        const bool branch_taken_0x1d3754 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3754u;
        // 0x1d3758: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3754) {
            ctx->pc = 0x1D3740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3740;
        }
    }
    ctx->pc = 0x1D375Cu;
    // 0x1d375c: 0xc0782ec  jal         func_1E0BB0
    ctx->pc = 0x1D375Cu;
    SET_GPR_U32(ctx, 31, 0x1D3764u);
    ctx->pc = 0x1D3760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D375Cu;
    // 0x1d3760: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0BB0u, 0x1D375Cu, 0x1D3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3764u;
label_1d3764:
    // 0x1d3764: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d3764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d3768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d376c: 0x24630478  addiu       $v1, $v1, 0x478
    ctx->pc = 0x1d376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1144));
    // 0x1d3770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3774: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d3774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x370478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x370478u, _value); } while (0);
    // 0x1d3778: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3778u;
        // 0x1d377c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3780u;
}
