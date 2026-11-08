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

// Function: entry_00181310
// Address: 0x181310 - 0x181388
void entry_00181310_0x181310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181310_0x181310");
#endif

    switch (ctx->pc) {
        case 0x181324u: goto label_181324;
        default: break;
    }

    ctx->pc = 0x181310u;

label_181310:
    // 0x181310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181314: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x181314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x181318: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18131c: 0xc061734  jal         func_185CD0
    ctx->pc = 0x18131Cu;
    SET_GPR_U32(ctx, 31, 0x181324u);
    ctx->pc = 0x181320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18131Cu;
    // 0x181320: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x18131Cu, 0x181324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181324u;
label_181324:
    // 0x181324: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x181324u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x181328: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x181328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18132c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18132cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x181330: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x181330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x181334: 0x24c688b0  addiu       $a2, $a2, -0x7750
    ctx->pc = 0x181334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936752));
    // 0x181338: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x181338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18133c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x18133cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x181340: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x181340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x181344: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x181344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x181348: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x181348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18134c: 0xa1070003  sb          $a3, 0x3($t0)
    ctx->pc = 0x18134cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x181350: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x181350u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x181354: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x181354u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x181358: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x181358u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18135c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x18135cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x181360: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x181360u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x181364: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x181364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x181368: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x181368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18136c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x18136Cu;
    {
        const bool branch_taken_0x18136c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18136Cu;
        // 0x181370: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18136c) {
            ctx->pc = 0x181310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181310;
        }
    }
    ctx->pc = 0x181374u;
    // 0x181374: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x181374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x181378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18137c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18137cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181380: 0xc061734  jal         func_185CD0
    ctx->pc = 0x181380u;
    SET_GPR_U32(ctx, 31, 0x181388u);
    ctx->pc = 0x181384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181380u;
    // 0x181384: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x181380u, 0x181388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181388u;
}
