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

// Function: entry_001a318c
// Address: 0x1a318c - 0x1a31b8
void entry_001a318c_0x1a318c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a318c_0x1a318c");
#endif

    ctx->pc = 0x1a318cu;

label_1a318c:
    // 0x1a318c: 0x9223067c  lbu         $v1, 0x67C($s1)
    ctx->pc = 0x1a318cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1660)));
label_1a3190:
    // 0x1a3190: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1a3194:
    if (ctx->pc == 0x1A3194u) {
        ctx->pc = 0x1A3198u;
        goto label_1a3198;
    }
    ctx->pc = 0x1A3190u;
    {
        const bool branch_taken_0x1a3190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3190) {
            ctx->pc = 0x1A31B8u;
            return;
        }
    }
    ctx->pc = 0x1A3198u;
label_1a3198:
    // 0x1a3198: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1a3198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1a319c:
    // 0x1a319c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1a31a0:
    if (ctx->pc == 0x1A31A0u) {
        ctx->pc = 0x1A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A319Cu;
        // 0x1a31a0: 0xa06028f5  sb          $zero, 0x28F5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31A4u;
        goto label_1a31a4;
    }
    ctx->pc = 0x1A319Cu;
    {
        const bool branch_taken_0x1a319c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A319Cu;
        // 0x1a31a0: 0xa06028f5  sb          $zero, 0x28F5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a319c) {
            ctx->pc = 0x1A31B8u;
            return;
        }
    }
    ctx->pc = 0x1A31A4u;
label_1a31a4:
    // 0x1a31a4: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x1a31a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_1a31a8:
    // 0x1a31a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a31a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a31ac:
    // 0x1a31ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a31acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a31b0:
    // 0x1a31b0: 0x320f809  jalr        $t9
label_1a31b4:
    if (ctx->pc == 0x1A31B4u) {
        ctx->pc = 0x1A31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31B0u;
        // 0x1a31b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31B8u;
        goto label_fallthrough_0x1a31b0;
    }
    ctx->pc = 0x1A31B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A31B8u);
        ctx->pc = 0x1A31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31B0u;
        // 0x1a31b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A31B0u, 0x1A31B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a31b0:
    ctx->pc = 0x1A31B8u;
}
