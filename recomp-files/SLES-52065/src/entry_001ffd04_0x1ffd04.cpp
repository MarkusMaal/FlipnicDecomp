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

// Function: entry_001ffd04
// Address: 0x1ffd04 - 0x1ffd28
void entry_001ffd04_0x1ffd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffd04_0x1ffd04");
#endif

    switch (ctx->pc) {
        case 0x1ffd0cu: goto label_1ffd0c;
        default: break;
    }

    ctx->pc = 0x1ffd04u;

    // 0x1ffd04: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x1FFD04u;
    SET_GPR_U32(ctx, 31, 0x1FFD0Cu);
    ctx->pc = 0x1FFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFD04u;
    // 0x1ffd08: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x1FFD04u, 0x1FFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFD0Cu;
label_1ffd0c:
    // 0x1ffd0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ffd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffd10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd14: 0xacb60014  sw          $s6, 0x14($a1)
    ctx->pc = 0x1ffd14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x1ffd18: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1FFD18u;
    {
        const bool branch_taken_0x1ffd18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFD18u;
        // 0x1ffd1c: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffd18) {
            ctx->pc = 0x1FFD58u;
            return;
        }
    }
    ctx->pc = 0x1FFD20u;
    // 0x1ffd20: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x1ffd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x1ffd24: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1ffd24u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1ffd28u;
}
