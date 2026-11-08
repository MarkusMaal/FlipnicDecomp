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

// Function: entry_00149634
// Address: 0x149634 - 0x149658
void entry_00149634_0x149634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149634_0x149634");
#endif

    switch (ctx->pc) {
        case 0x14964cu: goto label_14964c;
        default: break;
    }

    ctx->pc = 0x149634u;

    // 0x149634: 0x0  nop
    ctx->pc = 0x149634u;
    // NOP
    // 0x149638: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x149638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14963c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14963cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149640: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x149640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149644: 0xc0401a4  jal         func_100690
    ctx->pc = 0x149644u;
    SET_GPR_U32(ctx, 31, 0x14964Cu);
    ctx->pc = 0x149648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149644u;
    // 0x149648: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x149644u, 0x14964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14964Cu;
label_14964c:
    // 0x14964c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x14964cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x149650: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x149650u;
    {
        const bool branch_taken_0x149650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x149654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149650u;
        // 0x149654: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149650) {
            ctx->pc = 0x149604u;
            return;
        }
    }
    ctx->pc = 0x149658u;
}
