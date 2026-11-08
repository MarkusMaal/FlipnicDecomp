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

// Function: entry_001c5240
// Address: 0x1c5240 - 0x1c528c
void entry_001c5240_0x1c5240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5240_0x1c5240");
#endif

    switch (ctx->pc) {
        case 0x1c524cu: goto label_1c524c;
        case 0x1c5260u: goto label_1c5260;
        case 0x1c5274u: goto label_1c5274;
        case 0x1c5288u: goto label_1c5288;
        default: break;
    }

    ctx->pc = 0x1c5240u;

    // 0x1c5240: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c5240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5244: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5244u;
    SET_GPR_U32(ctx, 31, 0x1C524Cu);
    ctx->pc = 0x1C5248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5244u;
    // 0x1c5248: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5244u, 0x1C524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C524Cu;
label_1c524c:
    // 0x1c524c: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c524cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c5250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5254: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c5254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5258: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5258u;
    SET_GPR_U32(ctx, 31, 0x1C5260u);
    ctx->pc = 0x1C525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5258u;
    // 0x1c525c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5258u, 0x1C5260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5260u;
label_1c5260:
    // 0x1c5260: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c5260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5264: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c5264u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c5268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c526c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C526Cu;
    SET_GPR_U32(ctx, 31, 0x1C5274u);
    ctx->pc = 0x1C5270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C526Cu;
    // 0x1c5270: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C526Cu, 0x1C5274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5274u;
label_1c5274:
    // 0x1c5274: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c5274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c5278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c527c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c527cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5280: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C5280u;
    SET_GPR_U32(ctx, 31, 0x1C5288u);
    ctx->pc = 0x1C5284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5280u;
    // 0x1c5284: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C5280u, 0x1C5288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5288u;
label_1c5288:
    // 0x1c5288: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c5288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    ctx->pc = 0x1c528cu;
}
