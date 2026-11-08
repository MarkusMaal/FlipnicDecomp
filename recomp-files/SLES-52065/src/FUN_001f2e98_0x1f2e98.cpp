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

// Function: FUN_001f2e98
// Address: 0x1f2e98 - 0x1f30a0
void FUN_001f2e98_0x1f2e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2e98_0x1f2e98");
#endif

    switch (ctx->pc) {
        case 0x1f2ed0u: goto label_1f2ed0;
        case 0x1f2ee0u: goto label_1f2ee0;
        case 0x1f2f2cu: goto label_1f2f2c;
        case 0x1f2f90u: goto label_1f2f90;
        case 0x1f3020u: goto label_1f3020;
        case 0x1f305cu: goto label_1f305c;
        default: break;
    }

    ctx->pc = 0x1f2e98u;

    // 0x1f2e98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f2e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f2e9c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f2e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f2ea0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f2ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f2ea4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f2ea4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ea8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f2ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f2eac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f2eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2eb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f2eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f2eb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f2eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2eb8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f2eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f2ebc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f2ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ec0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f2ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f2ec4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f2ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f2ec8: 0xc07cab2  jal         func_1F2AC8
    ctx->pc = 0x1F2EC8u;
    SET_GPR_U32(ctx, 31, 0x1F2ED0u);
    ctx->pc = 0x1F2ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2EC8u;
    // 0x1f2ecc: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2AC8u, 0x1F2EC8u, 0x1F2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2ED0u;
label_1f2ed0:
    // 0x1f2ed0: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1F2ED0u;
    {
        const bool branch_taken_0x1f2ed0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2ED0u;
        // 0x1f2ed4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ed0) {
            ctx->pc = 0x1F3078u;
            goto label_1f3078;
        }
    }
    ctx->pc = 0x1F2ED8u;
    // 0x1f2ed8: 0xc07caf2  jal         func_1F2BC8
    ctx->pc = 0x1F2ED8u;
    SET_GPR_U32(ctx, 31, 0x1F2EE0u);
    ctx->pc = 0x1F2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2BC8u, 0x1F2ED8u, 0x1F2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EE0u;
label_1f2ee0:
    // 0x1f2ee0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2EE0u;
    {
        const bool branch_taken_0x1f2ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EE0u;
        // 0x1f2ee4: 0x3c140039  lui         $s4, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ee0) {
            ctx->pc = 0x1F2EF4u;
            goto label_1f2ef4;
        }
    }
    ctx->pc = 0x1F2EE8u;
    // 0x1f2ee8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f2eec: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1F2EECu;
    {
        const bool branch_taken_0x1f2eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EECu;
        // 0x1f2ef0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2eec) {
            ctx->pc = 0x1F3078u;
            goto label_1f3078;
        }
    }
    ctx->pc = 0x1F2EF4u;
label_1f2ef4:
    // 0x1f2ef4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1f2ef4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ef8: 0x2692fb80  addiu       $s2, $s4, -0x480
    ctx->pc = 0x1f2ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966144));
    // 0x1f2efc: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F2EFCu;
    {
        const bool branch_taken_0x1f2efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EFCu;
        // 0x1f2f00: 0xae93fb80  sw          $s3, -0x480($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294966144), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2efc) {
            ctx->pc = 0x1F3028u;
            goto label_1f3028;
        }
    }
    ctx->pc = 0x1F2F04u;
    // 0x1f2f04: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1f2f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1f2f08: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F2F08u;
    {
        const bool branch_taken_0x1f2f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F08u;
        // 0x1f2f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f08) {
            ctx->pc = 0x1F3014u;
            goto label_1f3014;
        }
    }
    ctx->pc = 0x1F2F10u;
    // 0x1f2f10: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1f2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1f2f14: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1f2f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1f2f18: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f2f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f2f1c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F2F1Cu;
    {
        const bool branch_taken_0x1f2f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F1Cu;
        // 0x1f2f20: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f1c) {
            ctx->pc = 0x1F2F88u;
            goto label_1f2f88;
        }
    }
    ctx->pc = 0x1F2F24u;
    // 0x1f2f24: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f2f28: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f2f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1f2f2c:
    // 0x1f2f2c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1f2f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f2f30: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1f2f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f2f34: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x1f2f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f2f38: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x1f2f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f2f3c: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x1f2f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f2f40: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x1f2f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f2f44: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x1f2f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1f2f48: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x1f2f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1f2f4c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1f2f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2f50: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1f2f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2f54: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1f2f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2f58: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1f2f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2f5c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1f2f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2f60: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1f2f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2f64: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1f2f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2f68: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1f2f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2f6c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1f2f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1f2f70: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f2f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2f74: 0x0  nop
    ctx->pc = 0x1f2f74u;
    // NOP
    // 0x1f2f78: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F2F78u;
    {
        const bool branch_taken_0x1f2f78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2f78) {
            ctx->pc = 0x1F2F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2f2c;
        }
    }
    ctx->pc = 0x1F2F80u;
    // 0x1f2f80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F2F80u;
    {
        const bool branch_taken_0x1f2f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2f80) {
            ctx->pc = 0x1F2FC4u;
            goto label_1f2fc4;
        }
    }
    ctx->pc = 0x1F2F88u;
label_1f2f88:
    // 0x1f2f88: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f2f8c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f2f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1f2f90:
    // 0x1f2f90: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1f2f90u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f2f94: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1f2f94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f2f98: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1f2f98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1f2f9c: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1f2f9cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1f2fa0: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1f2fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1f2fa4: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1f2fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1f2fa8: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1f2fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1f2fac: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1f2facu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1f2fb0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1f2fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1f2fb4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2fb8: 0x0  nop
    ctx->pc = 0x1f2fb8u;
    // NOP
    // 0x1f2fbc: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F2FBCu;
    {
        const bool branch_taken_0x1f2fbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2fbc) {
            ctx->pc = 0x1F2F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2f90;
        }
    }
    ctx->pc = 0x1F2FC4u;
label_1f2fc4:
    // 0x1f2fc4: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1f2fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1f2fc8: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1f2fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1f2fcc: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x1f2fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1f2fd0: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x1f2fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1f2fd4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1f2fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f2fd8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1f2fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f2fdc: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x1f2fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1f2fe0: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x1f2fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1f2fe4: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x1f2fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2fe8: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x1f2fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2fec: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x1f2fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2ff0: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x1f2ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2ff4: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x1f2ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2ff8: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x1f2ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2ffc: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x1f2ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f3000: 0x26a3fb80  addiu       $v1, $s5, -0x480
    ctx->pc = 0x1f3000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966144));
    // 0x1f3004: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1f3004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1f3008: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x1f3008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f300c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F300Cu;
    {
        const bool branch_taken_0x1f300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F300Cu;
        // 0x1f3010: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f300c) {
            ctx->pc = 0x1F3030u;
            goto label_1f3030;
        }
    }
    ctx->pc = 0x1F3014u;
label_1f3014:
    // 0x1f3014: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1f3014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1f3018: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F3018u;
    SET_GPR_U32(ctx, 31, 0x1F3020u);
    ctx->pc = 0x1F301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3018u;
    // 0x1f301c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F3018u, 0x1F3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3020u;
label_1f3020:
    // 0x1f3020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3020u;
    {
        const bool branch_taken_0x1f3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3020u;
        // 0x1f3024: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3020) {
            ctx->pc = 0x1F302Cu;
            goto label_1f302c;
        }
    }
    ctx->pc = 0x1F3028u;
label_1f3028:
    // 0x1f3028: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1f3028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1f302c:
    // 0x1f302c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f302cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1f3030:
    // 0x1f3030: 0x26b0fb80  addiu       $s0, $s5, -0x480
    ctx->pc = 0x1f3030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966144));
    // 0x1f3034: 0x24a4fd80  addiu       $a0, $a1, -0x280
    ctx->pc = 0x1f3034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966656));
    // 0x1f3038: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f3038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f303c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f303cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f3040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3044: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f3044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3048: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1f3048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f304c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f304cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3050: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1f3050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f3054: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F3054u;
    SET_GPR_U32(ctx, 31, 0x1F305Cu);
    ctx->pc = 0x1F3058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3054u;
    // 0x1f3058: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F3054u, 0x1F305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F305Cu;
label_1f305c:
    // 0x1f305c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F305Cu;
    {
        const bool branch_taken_0x1f305c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f305c) {
            ctx->pc = 0x1F3060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F305Cu;
            // 0x1f3060: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3070u;
            goto label_1f3070;
        }
    }
    ctx->pc = 0x1F3064u;
    // 0x1f3064: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f3064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f3068: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3068u;
    {
        const bool branch_taken_0x1f3068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3068u;
        // 0x1f306c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3068) {
            ctx->pc = 0x1F3078u;
            goto label_1f3078;
        }
    }
    ctx->pc = 0x1F3070u;
label_1f3070:
    // 0x1f3070: 0x8e82fb80  lw          $v0, -0x480($s4)
    ctx->pc = 0x1f3070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966144)));
    // 0x1f3074: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1f3074u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_1f3078:
    // 0x1f3078: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f3078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f307c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f307cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f3080: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f3080u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f3084: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f3084u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3088: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f3088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f308c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f308cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3090: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f3090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3094: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f3094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3098: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3098u;
        // 0x1f309c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F30A0u;
}
