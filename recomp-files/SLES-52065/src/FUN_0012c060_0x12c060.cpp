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

// Function: FUN_0012c060
// Address: 0x12c060 - 0x12c15c
void FUN_0012c060_0x12c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012c060_0x12c060");
#endif

    switch (ctx->pc) {
        case 0x12c094u: goto label_12c094;
        case 0x12c0c4u: goto label_12c0c4;
        case 0x12c134u: goto label_12c134;
        case 0x12c144u: goto label_12c144;
        default: break;
    }

    ctx->pc = 0x12c060u;

    // 0x12c060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12c064: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12c064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c068: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12c068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12c06c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12c06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12c070: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12c070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12c074: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12c074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12c07c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12c07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c084: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c088: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12c088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c08c: 0xc07d712  jal         func_1F5C48
    ctx->pc = 0x12C08Cu;
    SET_GPR_U32(ctx, 31, 0x12C094u);
    ctx->pc = 0x12C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C08Cu;
    // 0x12c090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5C48u, 0x12C08Cu, 0x12C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C094u;
label_12c094:
    // 0x12c094: 0xa2120067  sb          $s2, 0x67($s0)
    ctx->pc = 0x12c094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 18));
    // 0x12c098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c09c: 0xa2110068  sb          $s1, 0x68($s0)
    ctx->pc = 0x12c09cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 17));
    // 0x12c0a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12c0a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0a4: 0xa2000066  sb          $zero, 0x66($s0)
    ctx->pc = 0x12c0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c0a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0ac: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x12c0acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c0b0: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x12c0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c0b4: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x12c0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c0b8: 0xa3808484  sb          $zero, -0x7B7C($gp)
    ctx->pc = 0x12c0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935684), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c0bc: 0xa202006a  sb          $v0, 0x6A($s0)
    ctx->pc = 0x12c0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c0c0: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x12c0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_12c0c4:
    // 0x12c0c4: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x12c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x12c0c8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x12c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x12c0cc: 0xa4a00004  sh          $zero, 0x4($a1)
    ctx->pc = 0x12c0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c0d0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x12c0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12c0d4: 0xa4a00024  sh          $zero, 0x24($a1)
    ctx->pc = 0x12c0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c0d8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x12c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12c0dc: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x12c0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c0e0: 0xa4a00026  sh          $zero, 0x26($a1)
    ctx->pc = 0x12c0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c0e4: 0xa4a00008  sh          $zero, 0x8($a1)
    ctx->pc = 0x12c0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c0e8: 0xa4a00028  sh          $zero, 0x28($a1)
    ctx->pc = 0x12c0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c0ec: 0xa4a0000a  sh          $zero, 0xA($a1)
    ctx->pc = 0x12c0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c0f0: 0xa4a0002a  sh          $zero, 0x2A($a1)
    ctx->pc = 0x12c0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c0f4: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x12c0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c0f8: 0xa4a0002c  sh          $zero, 0x2C($a1)
    ctx->pc = 0x12c0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c0fc: 0xa4a0000e  sh          $zero, 0xE($a1)
    ctx->pc = 0x12c0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c100: 0xa4a0002e  sh          $zero, 0x2E($a1)
    ctx->pc = 0x12c100u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c104: 0xa4a00010  sh          $zero, 0x10($a1)
    ctx->pc = 0x12c104u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c108: 0xa4a00030  sh          $zero, 0x30($a1)
    ctx->pc = 0x12c108u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c10c: 0xa4a00012  sh          $zero, 0x12($a1)
    ctx->pc = 0x12c10cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x12c110: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12C110u;
    {
        const bool branch_taken_0x12c110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C110u;
        // 0x12c114: 0xa4a00032  sh          $zero, 0x32($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c110) {
            ctx->pc = 0x12C0C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c0c4;
        }
    }
    ctx->pc = 0x12C118u;
    // 0x12c118: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x12c118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x12c11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c120: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x12c120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x12c124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c128: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x12c128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x12c12c: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x12C12Cu;
    SET_GPR_U32(ctx, 31, 0x12C134u);
    ctx->pc = 0x12C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C12Cu;
    // 0x12c130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x12C12Cu, 0x12C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C134u;
label_12c134:
    // 0x12c134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12c138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c13c: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x12C13Cu;
    SET_GPR_U32(ctx, 31, 0x12C144u);
    ctx->pc = 0x12C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C13Cu;
    // 0x12c140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x12C13Cu, 0x12C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C144u;
label_12c144:
    // 0x12c144: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12c144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12c148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c14c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12c14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c154: 0x3e00008  jr          $ra
    ctx->pc = 0x12C154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C154u;
        // 0x12c158: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C15Cu;
}
