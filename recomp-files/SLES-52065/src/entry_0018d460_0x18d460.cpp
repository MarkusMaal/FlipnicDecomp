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

// Function: entry_0018d460
// Address: 0x18d460 - 0x18d4b4
void entry_0018d460_0x18d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d460_0x18d460");
#endif

    switch (ctx->pc) {
        case 0x18d4acu: goto label_18d4ac;
        default: break;
    }

    ctx->pc = 0x18d460u;

    // 0x18d460: 0xae20045c  sw          $zero, 0x45C($s1)
    ctx->pc = 0x18d460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 0));
    // 0x18d464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d468: 0xae200460  sw          $zero, 0x460($s1)
    ctx->pc = 0x18d468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1120), GPR_U32(ctx, 0));
    // 0x18d46c: 0xae200464  sw          $zero, 0x464($s1)
    ctx->pc = 0x18d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1124), GPR_U32(ctx, 0));
    // 0x18d470: 0xae20046c  sw          $zero, 0x46C($s1)
    ctx->pc = 0x18d470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1132), GPR_U32(ctx, 0));
    // 0x18d474: 0xae200468  sw          $zero, 0x468($s1)
    ctx->pc = 0x18d474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1128), GPR_U32(ctx, 0));
    // 0x18d478: 0xae202714  sw          $zero, 0x2714($s1)
    ctx->pc = 0x18d478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10004), GPR_U32(ctx, 0));
    // 0x18d47c: 0xae202710  sw          $zero, 0x2710($s1)
    ctx->pc = 0x18d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10000), GPR_U32(ctx, 0));
    // 0x18d480: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18d484: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18d488: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d48c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d490: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d494: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d498: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18d49c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18d4a0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x18d4a4: 0xc063e14  jal         func_18F850
    ctx->pc = 0x18D4A4u;
    SET_GPR_U32(ctx, 31, 0x18D4ACu);
    ctx->pc = 0x18D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4A4u;
    // 0x18d4a8: 0xae220480  sw          $v0, 0x480($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18D4A4u, 0x18D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4ACu;
label_18d4ac:
    // 0x18d4ac: 0x100003a8  b           . + 4 + (0x3A8 << 2)
    ctx->pc = 0x18D4ACu;
    {
        const bool branch_taken_0x18d4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d4ac) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18D4B4u;
}
