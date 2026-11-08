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

// Function: entry_001ab704
// Address: 0x1ab704 - 0x1ab744
void entry_001ab704_0x1ab704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab704_0x1ab704");
#endif

    switch (ctx->pc) {
        case 0x1ab73cu: goto label_1ab73c;
        default: break;
    }

    ctx->pc = 0x1ab704u;

    // 0x1ab704: 0x8e8306dc  lw          $v1, 0x6DC($s4)
    ctx->pc = 0x1ab704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1756)));
    // 0x1ab708: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AB708u;
    {
        const bool branch_taken_0x1ab708 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ab708) {
            ctx->pc = 0x1AB74Cu;
            return;
        }
    }
    ctx->pc = 0x1AB710u;
    // 0x1ab710: 0xae8006dc  sw          $zero, 0x6DC($s4)
    ctx->pc = 0x1ab710u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 0));
    // 0x1ab714: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1ab714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1ab718: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x1ab718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x1ab71c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB71Cu;
    {
        const bool branch_taken_0x1ab71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB71Cu;
        // 0x1ab720: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab71c) {
            ctx->pc = 0x1AB744u;
            return;
        }
    }
    ctx->pc = 0x1AB724u;
    // 0x1ab724: 0x8f8283a0  lw          $v0, -0x7C60($gp)
    ctx->pc = 0x1ab724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1ab728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab72c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab730: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ab730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ab734: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AB734u;
    SET_GPR_U32(ctx, 31, 0x1AB73Cu);
    ctx->pc = 0x1AB738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB734u;
    // 0x1ab738: 0xa0430008  sb          $v1, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB734u, 0x1AB73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB73Cu;
label_1ab73c:
    // 0x1ab73c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB73Cu;
    {
        const bool branch_taken_0x1ab73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB73Cu;
        // 0x1ab740: 0x928306d9  lbu         $v1, 0x6D9($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1753)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab73c) {
            ctx->pc = 0x1AB750u;
            return;
        }
    }
    ctx->pc = 0x1AB744u;
}
