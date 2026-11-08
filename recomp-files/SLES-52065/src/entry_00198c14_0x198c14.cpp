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

// Function: entry_00198c14
// Address: 0x198c14 - 0x198c34
void entry_00198c14_0x198c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198c14_0x198c14");
#endif

    ctx->pc = 0x198c14u;

label_198c14:
    // 0x198c14: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x198c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_198c18:
    // 0x198c18: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_198c1c:
    if (ctx->pc == 0x198C1Cu) {
        ctx->pc = 0x198C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C18u;
        // 0x198c1c: 0xa06028f4  sb          $zero, 0x28F4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10484), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C20u;
        goto label_198c20;
    }
    ctx->pc = 0x198C18u;
    {
        const bool branch_taken_0x198c18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C18u;
        // 0x198c1c: 0xa06028f4  sb          $zero, 0x28F4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10484), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c18) {
            ctx->pc = 0x198C34u;
            return;
        }
    }
    ctx->pc = 0x198C20u;
label_198c20:
    // 0x198c20: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x198c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_198c24:
    // 0x198c24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x198c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198c28:
    // 0x198c28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_198c2c:
    // 0x198c2c: 0x320f809  jalr        $t9
label_198c30:
    if (ctx->pc == 0x198C30u) {
        ctx->pc = 0x198C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C2Cu;
        // 0x198c30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C34u;
        goto label_fallthrough_0x198c2c;
    }
    ctx->pc = 0x198C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x198C34u);
        ctx->pc = 0x198C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C2Cu;
        // 0x198c30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198C2Cu, 0x198C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x198c2c:
    ctx->pc = 0x198C34u;
}
