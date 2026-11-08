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

// Function: FUN_001679c0
// Address: 0x1679c0 - 0x167a64
void FUN_001679c0_0x1679c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001679c0_0x1679c0");
#endif

    switch (ctx->pc) {
        case 0x1679fcu: goto label_1679fc;
        case 0x167a10u: goto label_167a10;
        case 0x167a2cu: goto label_167a2c;
        case 0x167a3cu: goto label_167a3c;
        case 0x167a54u: goto label_167a54;
        default: break;
    }

    ctx->pc = 0x1679c0u;

    // 0x1679c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1679c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1679c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1679c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1679c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1679c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1679cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1679ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1679d0: 0xac8501d4  sw          $a1, 0x1D4($a0)
    ctx->pc = 0x1679d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 5));
    // 0x1679d4: 0x10a60017  beq         $a1, $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1679D4u;
    {
        const bool branch_taken_0x1679d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1679D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679D4u;
        // 0x1679d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679d4) {
            ctx->pc = 0x167A34u;
            goto label_167a34;
        }
    }
    ctx->pc = 0x1679DCu;
    // 0x1679dc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1679DCu;
    {
        const bool branch_taken_0x1679dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1679E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679DCu;
        // 0x1679e0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679dc) {
            ctx->pc = 0x167A08u;
            goto label_167a08;
        }
    }
    ctx->pc = 0x1679E4u;
    // 0x1679e4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1679E4u;
    {
        const bool branch_taken_0x1679e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1679e4) {
            ctx->pc = 0x1679F4u;
            goto label_1679f4;
        }
    }
    ctx->pc = 0x1679ECu;
    // 0x1679ec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1679ECu;
    {
        const bool branch_taken_0x1679ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1679F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679ECu;
        // 0x1679f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1679ec) {
            ctx->pc = 0x167A58u;
            goto label_167a58;
        }
    }
    ctx->pc = 0x1679F4u;
label_1679f4:
    // 0x1679f4: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1679F4u;
    SET_GPR_U32(ctx, 31, 0x1679FCu);
    ctx->pc = 0x1679F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1679F4u;
    // 0x1679f8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1679F4u, 0x1679FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1679FCu;
label_1679fc:
    // 0x1679fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1679fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x167A00u;
    {
        const bool branch_taken_0x167a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A00u;
        // 0x167a04: 0xa20301d3  sb          $v1, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a00) {
            ctx->pc = 0x167A54u;
            goto label_167a54;
        }
    }
    ctx->pc = 0x167A08u;
label_167a08:
    // 0x167a08: 0xc042570  jal         func_1095C0
    ctx->pc = 0x167A08u;
    SET_GPR_U32(ctx, 31, 0x167A10u);
    ctx->pc = 0x167A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A08u;
    // 0x167a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x167A08u, 0x167A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A10u;
label_167a10:
    // 0x167a10: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167a14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167a1c: 0xa20301d3  sb          $v1, 0x1D3($s0)
    ctx->pc = 0x167a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
    // 0x167a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a24: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167A24u;
    SET_GPR_U32(ctx, 31, 0x167A2Cu);
    ctx->pc = 0x167A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A24u;
    // 0x167a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167A24u, 0x167A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A2Cu;
label_167a2c:
    // 0x167a2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x167A2Cu;
    {
        const bool branch_taken_0x167a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a2c) {
            ctx->pc = 0x167A54u;
            goto label_167a54;
        }
    }
    ctx->pc = 0x167A34u;
label_167a34:
    // 0x167a34: 0xc042570  jal         func_1095C0
    ctx->pc = 0x167A34u;
    SET_GPR_U32(ctx, 31, 0x167A3Cu);
    ctx->pc = 0x167A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A34u;
    // 0x167a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x167A34u, 0x167A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A3Cu;
label_167a3c:
    // 0x167a3c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167a48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a4c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167A4Cu;
    SET_GPR_U32(ctx, 31, 0x167A54u);
    ctx->pc = 0x167A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A4Cu;
    // 0x167a50: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167A4Cu, 0x167A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A54u;
label_167a54:
    // 0x167a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167a58:
    // 0x167a58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x167A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A5Cu;
        // 0x167a60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167A64u;
}
