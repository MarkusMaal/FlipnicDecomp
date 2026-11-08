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

// Function: entry_0017eaf4
// Address: 0x17eaf4 - 0x17eb1c
void entry_0017eaf4_0x17eaf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eaf4_0x17eaf4");
#endif

    ctx->pc = 0x17eaf4u;

    // 0x17eaf4: 0x0  nop
    ctx->pc = 0x17eaf4u;
    // NOP
    // 0x17eaf8: 0x8f828654  lw          $v0, -0x79AC($gp)
    ctx->pc = 0x17eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936148)));
    // 0x17eafc: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x17eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x17eb00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17eb04: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EB04u;
    {
        const bool branch_taken_0x17eb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB04u;
        // 0x17eb08: 0xaf828654  sw          $v0, -0x79AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb04) {
            ctx->pc = 0x17EB1Cu;
            return;
        }
    }
    ctx->pc = 0x17EB0Cu;
    // 0x17eb0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EB0Cu;
    {
        const bool branch_taken_0x17eb0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB0Cu;
        // 0x17eb10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb0c) {
            ctx->pc = 0x17EB1Cu;
            return;
        }
    }
    ctx->pc = 0x17EB14u;
    // 0x17eb14: 0xc048414  jal         func_121050
    ctx->pc = 0x17EB14u;
    SET_GPR_U32(ctx, 31, 0x17EB1Cu);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x17EB14u, 0x17EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB1Cu;
}
