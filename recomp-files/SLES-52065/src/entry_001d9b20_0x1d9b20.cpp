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

// Function: entry_001d9b20
// Address: 0x1d9b20 - 0x1d9b68
void entry_001d9b20_0x1d9b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9b20_0x1d9b20");
#endif

    switch (ctx->pc) {
        case 0x1d9b5cu: goto label_1d9b5c;
        default: break;
    }

    ctx->pc = 0x1d9b20u;

label_1d9b20:
    // 0x1d9b20: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1d9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d9b24: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1d9b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1d9b28: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1d9b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1d9b2c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1d9b2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9b30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d9b34: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1d9b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9b38: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1d9b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1d9b3c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1d9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1d9b40: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1d9b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d9b44: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D9B44u;
    {
        const bool branch_taken_0x1d9b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B44u;
        // 0x1d9b48: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b44) {
            ctx->pc = 0x1D9B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9b20;
        }
    }
    ctx->pc = 0x1D9B4Cu;
    // 0x1d9b4c: 0x4c20006  bltzl       $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9B4Cu;
    {
        const bool branch_taken_0x1d9b4c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1d9b4c) {
            ctx->pc = 0x1D9B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9B4Cu;
            // 0x1d9b50: 0x6107a  dsrl        $v0, $a2, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9B68u;
            return;
        }
    }
    ctx->pc = 0x1D9B54u;
    // 0x1d9b54: 0xc081a60  jal         func_206980
    ctx->pc = 0x1D9B54u;
    SET_GPR_U32(ctx, 31, 0x1D9B5Cu);
    ctx->pc = 0x1D9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B54u;
    // 0x1d9b58: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1D9B54u, 0x1D9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B5Cu;
label_1d9b5c:
    // 0x1d9b5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9B5Cu;
    {
        const bool branch_taken_0x1d9b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b5c) {
            ctx->pc = 0x1D9B80u;
            return;
        }
    }
    ctx->pc = 0x1D9B64u;
    // 0x1d9b64: 0x0  nop
    ctx->pc = 0x1d9b64u;
    // NOP
    ctx->pc = 0x1d9b68u;
}
