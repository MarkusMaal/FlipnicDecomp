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

// Function: entry_00137ab4
// Address: 0x137ab4 - 0x137b18
void entry_00137ab4_0x137ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137ab4_0x137ab4");
#endif

    switch (ctx->pc) {
        case 0x137ac0u: goto label_137ac0;
        case 0x137ad0u: goto label_137ad0;
        case 0x137ae0u: goto label_137ae0;
        case 0x137af0u: goto label_137af0;
        default: break;
    }

    ctx->pc = 0x137ab4u;

    // 0x137ab4: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x137ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x137ab8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137AB8u;
    SET_GPR_U32(ctx, 31, 0x137AC0u);
    ctx->pc = 0x137ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AB8u;
    // 0x137abc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137AB8u, 0x137AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AC0u;
label_137ac0:
    // 0x137ac0: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x137ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x137ac4: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x137ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x137ac8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137AC8u;
    SET_GPR_U32(ctx, 31, 0x137AD0u);
    ctx->pc = 0x137ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AC8u;
    // 0x137acc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137AC8u, 0x137AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AD0u;
label_137ad0:
    // 0x137ad0: 0x26a4004c  addiu       $a0, $s5, 0x4C
    ctx->pc = 0x137ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
    // 0x137ad4: 0x26850018  addiu       $a1, $s4, 0x18
    ctx->pc = 0x137ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x137ad8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137AD8u;
    SET_GPR_U32(ctx, 31, 0x137AE0u);
    ctx->pc = 0x137ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AD8u;
    // 0x137adc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137AD8u, 0x137AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AE0u;
label_137ae0:
    // 0x137ae0: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x137ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x137ae4: 0x2685001c  addiu       $a1, $s4, 0x1C
    ctx->pc = 0x137ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x137ae8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137AE8u;
    SET_GPR_U32(ctx, 31, 0x137AF0u);
    ctx->pc = 0x137AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AE8u;
    // 0x137aec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137AE8u, 0x137AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AF0u;
label_137af0:
    // 0x137af0: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x137af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x137af4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x137AF4u;
    {
        const bool branch_taken_0x137af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AF4u;
        // 0x137af8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137af4) {
            ctx->pc = 0x137B18u;
            return;
        }
    }
    ctx->pc = 0x137AFCu;
    // 0x137afc: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x137afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x137b00: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137b04: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x137b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x137b08: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x137b08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
    // 0x137b0c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x137b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x137b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137B10u;
    {
        const bool branch_taken_0x137b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B10u;
        // 0x137b14: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b10) {
            ctx->pc = 0x137B1Cu;
            return;
        }
    }
    ctx->pc = 0x137B18u;
}
