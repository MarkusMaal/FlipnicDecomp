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

// Function: entry_0019bde4
// Address: 0x19bde4 - 0x19be1c
void entry_0019bde4_0x19bde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bde4_0x19bde4");
#endif

    switch (ctx->pc) {
        case 0x19be04u: goto label_19be04;
        default: break;
    }

    ctx->pc = 0x19bde4u;

    // 0x19bde4: 0x0  nop
    ctx->pc = 0x19bde4u;
    // NOP
    // 0x19bde8: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x19bde8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x19bdec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19bdf0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19bdf4: 0x1062ff9d  beq         $v1, $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x19BDF4u;
    {
        const bool branch_taken_0x19bdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bdf4) {
            ctx->pc = 0x19BC6Cu;
            return;
        }
    }
    ctx->pc = 0x19BDFCu;
    // 0x19bdfc: 0xc058018  jal         func_160060
    ctx->pc = 0x19BDFCu;
    SET_GPR_U32(ctx, 31, 0x19BE04u);
    ctx->pc = 0x19BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BDFCu;
    // 0x19be00: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x19BDFCu, 0x19BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE04u;
label_19be04:
    // 0x19be04: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x19be04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
    // 0x19be08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19be08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be0c: 0xae2008ec  sw          $zero, 0x8EC($s1)
    ctx->pc = 0x19be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2284), GPR_U32(ctx, 0));
    // 0x19be10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19BE10u;
    {
        const bool branch_taken_0x19be10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE10u;
        // 0x19be14: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be10) {
            ctx->pc = 0x19BE34u;
            return;
        }
    }
    ctx->pc = 0x19BE18u;
    // 0x19be18: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x19be18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->pc = 0x19be1cu;
}
