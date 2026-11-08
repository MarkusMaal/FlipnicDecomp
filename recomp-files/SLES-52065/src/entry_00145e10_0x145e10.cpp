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

// Function: entry_00145e10
// Address: 0x145e10 - 0x145e3c
void entry_00145e10_0x145e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145e10_0x145e10");
#endif

    switch (ctx->pc) {
        case 0x145e1cu: goto label_145e1c;
        default: break;
    }

    ctx->pc = 0x145e10u;

    // 0x145e10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x145e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x145e14: 0xc05021c  jal         func_140870
    ctx->pc = 0x145E14u;
    SET_GPR_U32(ctx, 31, 0x145E1Cu);
    ctx->pc = 0x145E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E14u;
    // 0x145e18: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x145E14u, 0x145E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E1Cu;
label_145e1c:
    // 0x145e1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x145e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x145e20: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x145e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x145e24: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x145e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x145e28: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x145E28u;
    {
        const bool branch_taken_0x145e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e28) {
            ctx->pc = 0x145DF4u;
            return;
        }
    }
    ctx->pc = 0x145E30u;
    // 0x145e30: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x145e30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x145e34: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x145E34u;
    {
        const bool branch_taken_0x145e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E34u;
        // 0x145e38: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e34) {
            ctx->pc = 0x145EF4u;
            return;
        }
    }
    ctx->pc = 0x145E3Cu;
}
