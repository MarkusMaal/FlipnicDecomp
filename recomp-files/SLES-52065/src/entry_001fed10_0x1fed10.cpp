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

// Function: entry_001fed10
// Address: 0x1fed10 - 0x1fed3c
void entry_001fed10_0x1fed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fed10_0x1fed10");
#endif

    switch (ctx->pc) {
        case 0x1fed1cu: goto label_1fed1c;
        default: break;
    }

    ctx->pc = 0x1fed10u;

    // 0x1fed10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1fed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed14: 0xc0804a2  jal         func_201288
    ctx->pc = 0x1FED14u;
    SET_GPR_U32(ctx, 31, 0x1FED1Cu);
    ctx->pc = 0x1FED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FED14u;
    // 0x1fed18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201288u, 0x1FED14u, 0x1FED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FED1Cu;
label_1fed1c:
    // 0x1fed1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fed1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed20: 0x1230005c  beq         $s1, $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1FED20u;
    {
        const bool branch_taken_0x1fed20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1FED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED20u;
        // 0x1fed24: 0x235102b  sltu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed20) {
            ctx->pc = 0x1FEE94u;
            return;
        }
    }
    ctx->pc = 0x1FED28u;
    // 0x1fed28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FED28u;
    {
        const bool branch_taken_0x1fed28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED28u;
        // 0x1fed2c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed28) {
            ctx->pc = 0x1FED3Cu;
            return;
        }
    }
    ctx->pc = 0x1FED30u;
    // 0x1fed30: 0x2484d9c8  addiu       $a0, $a0, -0x2638
    ctx->pc = 0x1fed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957512));
    // 0x1fed34: 0x16840058  bne         $s4, $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1FED34u;
    {
        const bool branch_taken_0x1fed34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FED34u;
        // 0x1fed38: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fed34) {
            ctx->pc = 0x1FEE98u;
            return;
        }
    }
    ctx->pc = 0x1FED3Cu;
}
