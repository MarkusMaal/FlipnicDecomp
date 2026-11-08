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

// Function: entry_001e76fc
// Address: 0x1e76fc - 0x1e776c
void entry_001e76fc_0x1e76fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e76fc_0x1e76fc");
#endif

    switch (ctx->pc) {
        case 0x1e7738u: goto label_1e7738;
        default: break;
    }

    ctx->pc = 0x1e76fcu;

    // 0x1e76fc: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e76fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1e7700: 0x27b30066  addiu       $s3, $sp, 0x66
    ctx->pc = 0x1e7700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 102));
    // 0x1e7704: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1e7704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7708: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e7708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e770c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x1e770cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e7710: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x1e7710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7714: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x1e7714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e7718: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e7718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e771c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e771cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7720: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1e7720u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7724: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1e7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e7728: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1e7728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e772c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e772cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e7730: 0xc079e1c  jal         func_1E7870
    ctx->pc = 0x1E7730u;
    SET_GPR_U32(ctx, 31, 0x1E7738u);
    ctx->pc = 0x1E7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7730u;
    // 0x1e7734: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7870u, 0x1E7730u, 0x1E7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7738u;
label_1e7738:
    // 0x1e7738: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1e7738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e773c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e773cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7740: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1e7740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e7744: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e7744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e7748: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1e7748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e774c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E774Cu;
    {
        const bool branch_taken_0x1e774c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E774Cu;
        // 0x1e7750: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e774c) {
            ctx->pc = 0x1E776Cu;
            return;
        }
    }
    ctx->pc = 0x1E7754u;
    // 0x1e7754: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1e7754u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e7758: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1e7758u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e775c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e775cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7760: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7760u;
    {
        const bool branch_taken_0x1e7760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7760u;
        // 0x1e7764: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7760) {
            ctx->pc = 0x1E7780u;
            return;
        }
    }
    ctx->pc = 0x1E7768u;
    // 0x1e7768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e776cu;
}
