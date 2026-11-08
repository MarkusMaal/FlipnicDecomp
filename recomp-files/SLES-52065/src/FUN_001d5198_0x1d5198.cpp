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

// Function: FUN_001d5198
// Address: 0x1d5198 - 0x1d5228
void FUN_001d5198_0x1d5198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5198_0x1d5198");
#endif

    switch (ctx->pc) {
        case 0x1d51b4u: goto label_1d51b4;
        case 0x1d51d0u: goto label_1d51d0;
        default: break;
    }

    ctx->pc = 0x1d5198u;

    // 0x1d5198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d519c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d51a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d51a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d51a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d51a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d51a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d51ac: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D51ACu;
    SET_GPR_U32(ctx, 31, 0x1D51B4u);
    ctx->pc = 0x1D51B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51ACu;
    // 0x1d51b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D51ACu, 0x1D51B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51B4u;
label_1d51b4:
    // 0x1d51b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d51b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51b8: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d51bc: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x1d51bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d51c0: 0x240600f7  addiu       $a2, $zero, 0xF7
    ctx->pc = 0x1d51c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x1d51c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d51c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d51c8: 0x242105b0  addiu       $at, $at, 0x5B0
    ctx->pc = 0x1d51c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 1456));
    // 0x1d51cc: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1d51ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_1d51d0:
    // 0x1d51d0: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1d51d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1d51d4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1d51d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d51d8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d51d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d51dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1d51dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d51e0: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x1d51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1d51e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d51e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d51e8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1d51e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1d51ec: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x1d51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    // 0x1d51f0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d51f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d51f4: 0x1466fff6  bne         $v1, $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D51F4u;
    {
        const bool branch_taken_0x1d51f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1D51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51F4u;
        // 0x1d51f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51f4) {
            ctx->pc = 0x1D51D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51d0;
        }
    }
    ctx->pc = 0x1D51FCu;
    // 0x1d51fc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D51FCu;
    {
        const bool branch_taken_0x1d51fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51FCu;
        // 0x1d5200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51fc) {
            ctx->pc = 0x1D5218u;
            goto label_1d5218;
        }
    }
    ctx->pc = 0x1D5204u;
    // 0x1d5204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d520c: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1D520Cu;
    ctx->pc = 0x1D5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D520Cu;
    // 0x1d5210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5214u;
    // 0x1d5214: 0x0  nop
    ctx->pc = 0x1d5214u;
    // NOP
label_1d5218:
    // 0x1d5218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d521c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d521cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5220: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5220u;
        // 0x1d5224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5228u;
}
