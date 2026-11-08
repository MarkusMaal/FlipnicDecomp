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

// Function: entry_001d4d38
// Address: 0x1d4d38 - 0x1d4ddc
void entry_001d4d38_0x1d4d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4d38_0x1d4d38");
#endif

    ctx->pc = 0x1d4d38u;

label_1d4d38:
    // 0x1d4d38: 0x1461026  xor         $v0, $t2, $a2
    ctx->pc = 0x1d4d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 6));
    // 0x1d4d3c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d4d3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d4d40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d4d40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4d44: 0x29440010  slti        $a0, $t2, 0x10
    ctx->pc = 0x1d4d44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d4d48: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x1d4d48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1d4d4c: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x1d4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x1d4d50: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x1d4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d4d54: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1d4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x1d4d58: 0xad22002c  sw          $v0, 0x2C($t1)
    ctx->pc = 0x1d4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 2));
    // 0x1d4d5c: 0xad2f0008  sw          $t7, 0x8($t1)
    ctx->pc = 0x1d4d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 15));
    // 0x1d4d60: 0xad2d000c  sw          $t5, 0xC($t1)
    ctx->pc = 0x1d4d60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 13));
    // 0x1d4d64: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x1d4d64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
    // 0x1d4d68: 0xad2c0014  sw          $t4, 0x14($t1)
    ctx->pc = 0x1d4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 12));
    // 0x1d4d6c: 0xad2c0020  sw          $t4, 0x20($t1)
    ctx->pc = 0x1d4d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 12));
    // 0x1d4d70: 0xad200024  sw          $zero, 0x24($t1)
    ctx->pc = 0x1d4d70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
    // 0x1d4d74: 0xad200030  sw          $zero, 0x30($t1)
    ctx->pc = 0x1d4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 0));
    // 0x1d4d78: 0xad2d0034  sw          $t5, 0x34($t1)
    ctx->pc = 0x1d4d78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 13));
    // 0x1d4d7c: 0xa1200068  sb          $zero, 0x68($t1)
    ctx->pc = 0x1d4d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d4d80: 0xa1200069  sb          $zero, 0x69($t1)
    ctx->pc = 0x1d4d80u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d4d84: 0xa120006a  sb          $zero, 0x6A($t1)
    ctx->pc = 0x1d4d84u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d4d88: 0xa120006b  sb          $zero, 0x6B($t1)
    ctx->pc = 0x1d4d88u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 107), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d4d8c: 0xad2e004c  sw          $t6, 0x4C($t1)
    ctx->pc = 0x1d4d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 76), GPR_U32(ctx, 14));
    // 0x1d4d90: 0xad20006c  sw          $zero, 0x6C($t1)
    ctx->pc = 0x1d4d90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 108), GPR_U32(ctx, 0));
    // 0x1d4d94: 0xad200070  sw          $zero, 0x70($t1)
    ctx->pc = 0x1d4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 112), GPR_U32(ctx, 0));
    // 0x1d4d98: 0xa5200060  sh          $zero, 0x60($t1)
    ctx->pc = 0x1d4d98u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d4d9c: 0xa5200062  sh          $zero, 0x62($t1)
    ctx->pc = 0x1d4d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d4da0: 0xa5200064  sh          $zero, 0x64($t1)
    ctx->pc = 0x1d4da0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d4da4: 0xa5200066  sh          $zero, 0x66($t1)
    ctx->pc = 0x1d4da4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 102), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d4da8: 0xad200050  sw          $zero, 0x50($t1)
    ctx->pc = 0x1d4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 80), GPR_U32(ctx, 0));
    // 0x1d4dac: 0xad200054  sw          $zero, 0x54($t1)
    ctx->pc = 0x1d4dacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 84), GPR_U32(ctx, 0));
    // 0x1d4db0: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x1d4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x1d4db4: 0xad20005c  sw          $zero, 0x5C($t1)
    ctx->pc = 0x1d4db4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 92), GPR_U32(ctx, 0));
    // 0x1d4db8: 0xad200038  sw          $zero, 0x38($t1)
    ctx->pc = 0x1d4db8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 56), GPR_U32(ctx, 0));
    // 0x1d4dbc: 0xad20003c  sw          $zero, 0x3C($t1)
    ctx->pc = 0x1d4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 60), GPR_U32(ctx, 0));
    // 0x1d4dc0: 0xad250048  sw          $a1, 0x48($t1)
    ctx->pc = 0x1d4dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 72), GPR_U32(ctx, 5));
    // 0x1d4dc4: 0xad250044  sw          $a1, 0x44($t1)
    ctx->pc = 0x1d4dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 68), GPR_U32(ctx, 5));
    // 0x1d4dc8: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x1d4dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
    // 0x1d4dcc: 0x1480ffda  bnez        $a0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D4DCCu;
    {
        const bool branch_taken_0x1d4dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DCCu;
        // 0x1d4dd0: 0x25290074  addiu       $t1, $t1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4dcc) {
            ctx->pc = 0x1D4D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4d38;
        }
    }
    ctx->pc = 0x1D4DD4u;
    // 0x1d4dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4DDCu;
}
