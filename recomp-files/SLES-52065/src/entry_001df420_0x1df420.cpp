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

// Function: entry_001df420
// Address: 0x1df420 - 0x1df4a8
void entry_001df420_0x1df420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df420_0x1df420");
#endif

    switch (ctx->pc) {
        case 0x1df42cu: goto label_1df42c;
        case 0x1df43cu: goto label_1df43c;
        case 0x1df44cu: goto label_1df44c;
        default: break;
    }

    ctx->pc = 0x1df420u;

    // 0x1df420: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1df420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df424: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF424u;
    SET_GPR_U32(ctx, 31, 0x1DF42Cu);
    ctx->pc = 0x1DF428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF424u;
    // 0x1df428: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF424u, 0x1DF42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF42Cu;
label_1df42c:
    // 0x1df42c: 0xde250078  ld          $a1, 0x78($s1)
    ctx->pc = 0x1df42cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1df430: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df430u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df434: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF434u;
    SET_GPR_U32(ctx, 31, 0x1DF43Cu);
    ctx->pc = 0x1DF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF434u;
    // 0x1df438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF434u, 0x1DF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF43Cu;
label_1df43c:
    // 0x1df43c: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x1df43cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1df440: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1df440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1df444: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF444u;
    SET_GPR_U32(ctx, 31, 0x1DF44Cu);
    ctx->pc = 0x1DF448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF444u;
    // 0x1df448: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF444u, 0x1DF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF44Cu;
label_1df44c:
    // 0x1df44c: 0x2535021  addu        $t2, $s2, $s3
    ctx->pc = 0x1df44cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1df450: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1df450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1df454: 0x26430060  addiu       $v1, $s2, 0x60
    ctx->pc = 0x1df454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1df458: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1df458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1df45c: 0x2454821  addu        $t1, $s2, $a1
    ctx->pc = 0x1df45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1df460: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1df460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1df464: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1df464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1df468: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1df468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1df46c: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df46cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df470: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1df470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1df474: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1df474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df47c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1df47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df480: 0xad47001c  sw          $a3, 0x1C($t2)
    ctx->pc = 0x1df480u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 7));
    // 0x1df484: 0xfca20040  sd          $v0, 0x40($a1)
    ctx->pc = 0x1df484u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 2));
    // 0x1df488: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x1df488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x1df48c: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1df48cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1df490: 0xfd220050  sd          $v0, 0x50($t1)
    ctx->pc = 0x1df490u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 80), GPR_U64(ctx, 2));
    // 0x1df494: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1df494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1df498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df49c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1df49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1df4a0: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x1df4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1df4a4: 0x0  nop
    ctx->pc = 0x1df4a4u;
    // NOP
    ctx->pc = 0x1df4a8u;
}
