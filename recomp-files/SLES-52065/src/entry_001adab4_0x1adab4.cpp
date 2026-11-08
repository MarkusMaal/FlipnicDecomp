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

// Function: entry_001adab4
// Address: 0x1adab4 - 0x1adaf8
void entry_001adab4_0x1adab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adab4_0x1adab4");
#endif

    ctx->pc = 0x1adab4u;

    // 0x1adab4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ADAB4u;
    {
        const bool branch_taken_0x1adab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adab4) {
            ctx->pc = 0x1ADAF8u;
            return;
        }
    }
    ctx->pc = 0x1ADABCu;
    // 0x1adabc: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1adabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1adac0: 0x9063282c  lbu         $v1, 0x282C($v1)
    ctx->pc = 0x1adac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
    // 0x1adac4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1ADAC4u;
    {
        const bool branch_taken_0x1adac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adac4) {
            ctx->pc = 0x1ADAF8u;
            return;
        }
    }
    ctx->pc = 0x1ADACCu;
    // 0x1adacc: 0x8e2306c4  lw          $v1, 0x6C4($s1)
    ctx->pc = 0x1adaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
    // 0x1adad0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1adad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1adad4: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ADAD4u;
    {
        const bool branch_taken_0x1adad4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1ADAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAD4u;
        // 0x1adad8: 0xae2306c4  sw          $v1, 0x6C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adad4) {
            ctx->pc = 0x1ADAF8u;
            return;
        }
    }
    ctx->pc = 0x1ADADCu;
    // 0x1adadc: 0xae2006c4  sw          $zero, 0x6C4($s1)
    ctx->pc = 0x1adadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1732), GPR_U32(ctx, 0));
    // 0x1adae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1adae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adae4: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1adae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1adae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1adaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1adaf0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1ADAF0u;
    SET_GPR_U32(ctx, 31, 0x1ADAF8u);
    ctx->pc = 0x1ADAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAF0u;
    // 0x1adaf4: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1ADAF0u, 0x1ADAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAF8u;
}
