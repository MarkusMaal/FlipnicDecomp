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

// Function: entry_00181280
// Address: 0x181280 - 0x181310
void entry_00181280_0x181280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181280_0x181280");
#endif

    switch (ctx->pc) {
        case 0x181294u: goto label_181294;
        case 0x1812f4u: goto label_1812f4;
        case 0x18130cu: goto label_18130c;
        default: break;
    }

    ctx->pc = 0x181280u;

label_181280:
    // 0x181280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181284:
    // 0x181284: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x181284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_181288:
    // 0x181288: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x181288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18128c:
    // 0x18128c: 0xc061734  jal         func_185CD0
label_181290:
    if (ctx->pc == 0x181290u) {
        ctx->pc = 0x181290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18128Cu;
        // 0x181290: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181294u;
        goto label_181294;
    }
    ctx->pc = 0x18128Cu;
    SET_GPR_U32(ctx, 31, 0x181294u);
    ctx->pc = 0x181290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18128Cu;
    // 0x181290: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x18128Cu, 0x181294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181294u;
label_181294:
    // 0x181294: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x181294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_181298:
    // 0x181298: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x181298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_18129c:
    // 0x18129c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18129cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1812a0:
    // 0x1812a0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1812a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_1812a4:
    // 0x1812a4: 0x24a58960  addiu       $a1, $a1, -0x76A0
    ctx->pc = 0x1812a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936928));
label_1812a8:
    // 0x1812a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1812a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1812ac:
    // 0x1812ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1812acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1812b0:
    // 0x1812b0: 0x3448000a  ori         $t0, $v0, 0xA
    ctx->pc = 0x1812b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1812b4:
    // 0x1812b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1812b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1812b8:
    // 0x1812b8: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x1812b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_1812bc:
    // 0x1812bc: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x1812bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
label_1812c0:
    // 0x1812c0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1812c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_1812c4:
    // 0x1812c4: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1812c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_1812c8:
    // 0x1812c8: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x1812c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_1812cc:
    // 0x1812cc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1812ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_1812d0:
    // 0x1812d0: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x1812d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
label_1812d4:
    // 0x1812d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1812d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1812d8:
    // 0x1812d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1812d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1812dc:
    // 0x1812dc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1812e0:
    if (ctx->pc == 0x1812E0u) {
        ctx->pc = 0x1812E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812DCu;
        // 0x1812e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1812E4u;
        goto label_1812e4;
    }
    ctx->pc = 0x1812DCu;
    {
        const bool branch_taken_0x1812dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1812E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812DCu;
        // 0x1812e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812dc) {
            ctx->pc = 0x181280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181280;
        }
    }
    ctx->pc = 0x1812E4u;
label_1812e4:
    // 0x1812e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1812e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1812e8:
    // 0x1812e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1812e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1812ec:
    // 0x1812ec: 0xc0495c0  jal         func_125700
label_1812f0:
    if (ctx->pc == 0x1812F0u) {
        ctx->pc = 0x1812F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812ECu;
        // 0x1812f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1812F4u;
        goto label_1812f4;
    }
    ctx->pc = 0x1812ECu;
    SET_GPR_U32(ctx, 31, 0x1812F4u);
    ctx->pc = 0x1812F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1812ECu;
    // 0x1812f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x1812ECu, 0x1812F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1812F4u;
label_1812f4:
    // 0x1812f4: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x1812f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1812f8:
    // 0x1812f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1812f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1812fc:
    // 0x1812fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1812fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_181300:
    // 0x181300: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x181300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_181304:
    // 0x181304: 0x320f809  jalr        $t9
label_181308:
    if (ctx->pc == 0x181308u) {
        ctx->pc = 0x181308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181304u;
        // 0x181308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18130Cu;
        goto label_18130c;
    }
    ctx->pc = 0x181304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18130Cu);
        ctx->pc = 0x181308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181304u;
        // 0x181308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181304u, 0x18130Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18130Cu;
label_18130c:
    // 0x18130c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18130cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181310u;
}
