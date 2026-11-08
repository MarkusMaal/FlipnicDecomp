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

// Function: entry_0018dd90
// Address: 0x18dd90 - 0x18ddcc
void entry_0018dd90_0x18dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd90_0x18dd90");
#endif

    switch (ctx->pc) {
        case 0x18dd9cu: goto label_18dd9c;
        case 0x18ddacu: goto label_18ddac;
        default: break;
    }

    ctx->pc = 0x18dd90u;

label_18dd90:
    // 0x18dd90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18dd94:
    // 0x18dd94: 0xc05f878  jal         func_17E1E0
label_18dd98:
    if (ctx->pc == 0x18DD98u) {
        ctx->pc = 0x18DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD94u;
        // 0x18dd98: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD9Cu;
        goto label_18dd9c;
    }
    ctx->pc = 0x18DD94u;
    SET_GPR_U32(ctx, 31, 0x18DD9Cu);
    ctx->pc = 0x18DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD94u;
    // 0x18dd98: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18DD94u, 0x18DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD9Cu;
label_18dd9c:
    // 0x18dd9c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18dd9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18dda0:
    // 0x18dda0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18dda0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18dda4:
    // 0x18dda4: 0x320f809  jalr        $t9
label_18dda8:
    if (ctx->pc == 0x18DDA8u) {
        ctx->pc = 0x18DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDA4u;
        // 0x18dda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDACu;
        goto label_18ddac;
    }
    ctx->pc = 0x18DDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18DDACu);
        ctx->pc = 0x18DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDA4u;
        // 0x18dda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DDA4u, 0x18DDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DDACu;
label_18ddac:
    // 0x18ddac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_18ddb0:
    if (ctx->pc == 0x18DDB0u) {
        ctx->pc = 0x18DDB4u;
        goto label_18ddb4;
    }
    ctx->pc = 0x18DDACu;
    {
        const bool branch_taken_0x18ddac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ddac) {
            ctx->pc = 0x18DE18u;
            return;
        }
    }
    ctx->pc = 0x18DDB4u;
label_18ddb4:
    // 0x18ddb4: 0x8e230474  lw          $v1, 0x474($s1)
    ctx->pc = 0x18ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1140)));
label_18ddb8:
    // 0x18ddb8: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
label_18ddbc:
    if (ctx->pc == 0x18DDBCu) {
        ctx->pc = 0x18DDC0u;
        goto label_18ddc0;
    }
    ctx->pc = 0x18DDB8u;
    {
        const bool branch_taken_0x18ddb8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x18ddb8) {
            ctx->pc = 0x18DDCCu;
            return;
        }
    }
    ctx->pc = 0x18DDC0u;
label_18ddc0:
    // 0x18ddc0: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x18ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
label_18ddc4:
    // 0x18ddc4: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
label_18ddc8:
    if (ctx->pc == 0x18DDC8u) {
        ctx->pc = 0x18DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDC4u;
        // 0x18ddc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDCCu;
        goto label_fallthrough_0x18ddc4;
    }
    ctx->pc = 0x18DDC4u;
    {
        const bool branch_taken_0x18ddc4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDC4u;
        // 0x18ddc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddc4) {
            ctx->pc = 0x18DE10u;
            return;
        }
    }
label_fallthrough_0x18ddc4:
    ctx->pc = 0x18DDCCu;
}
