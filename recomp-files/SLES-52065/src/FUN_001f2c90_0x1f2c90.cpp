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

// Function: FUN_001f2c90
// Address: 0x1f2c90 - 0x1f2e98
void FUN_001f2c90_0x1f2c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2c90_0x1f2c90");
#endif

    switch (ctx->pc) {
        case 0x1f2cc8u: goto label_1f2cc8;
        case 0x1f2cd8u: goto label_1f2cd8;
        case 0x1f2d24u: goto label_1f2d24;
        case 0x1f2d88u: goto label_1f2d88;
        case 0x1f2e18u: goto label_1f2e18;
        case 0x1f2e54u: goto label_1f2e54;
        default: break;
    }

    ctx->pc = 0x1f2c90u;

    // 0x1f2c90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f2c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f2c94: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f2c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f2c98: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f2c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f2c9c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f2c9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ca0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f2ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f2ca4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f2ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ca8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f2ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f2cac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f2cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cb0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f2cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f2cb4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f2cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cb8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f2cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f2cbc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f2cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f2cc0: 0xc07cab2  jal         func_1F2AC8
    ctx->pc = 0x1F2CC0u;
    SET_GPR_U32(ctx, 31, 0x1F2CC8u);
    ctx->pc = 0x1F2CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CC0u;
    // 0x1f2cc4: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2AC8u, 0x1F2CC0u, 0x1F2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CC8u;
label_1f2cc8:
    // 0x1f2cc8: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1F2CC8u;
    {
        const bool branch_taken_0x1f2cc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CC8u;
        // 0x1f2ccc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cc8) {
            ctx->pc = 0x1F2E70u;
            goto label_1f2e70;
        }
    }
    ctx->pc = 0x1F2CD0u;
    // 0x1f2cd0: 0xc07caf2  jal         func_1F2BC8
    ctx->pc = 0x1F2CD0u;
    SET_GPR_U32(ctx, 31, 0x1F2CD8u);
    ctx->pc = 0x1F2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2BC8u, 0x1F2CD0u, 0x1F2CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CD8u;
label_1f2cd8:
    // 0x1f2cd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2CD8u;
    {
        const bool branch_taken_0x1f2cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CD8u;
        // 0x1f2cdc: 0x3c140039  lui         $s4, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cd8) {
            ctx->pc = 0x1F2CECu;
            goto label_1f2cec;
        }
    }
    ctx->pc = 0x1F2CE0u;
    // 0x1f2ce0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f2ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f2ce4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1F2CE4u;
    {
        const bool branch_taken_0x1f2ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CE4u;
        // 0x1f2ce8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ce4) {
            ctx->pc = 0x1F2E70u;
            goto label_1f2e70;
        }
    }
    ctx->pc = 0x1F2CECu;
label_1f2cec:
    // 0x1f2cec: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1f2cecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cf0: 0x2692fb80  addiu       $s2, $s4, -0x480
    ctx->pc = 0x1f2cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966144));
    // 0x1f2cf4: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F2CF4u;
    {
        const bool branch_taken_0x1f2cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CF4u;
        // 0x1f2cf8: 0xae93fb80  sw          $s3, -0x480($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294966144), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cf4) {
            ctx->pc = 0x1F2E20u;
            goto label_1f2e20;
        }
    }
    ctx->pc = 0x1F2CFCu;
    // 0x1f2cfc: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1f2cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1f2d00: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F2D00u;
    {
        const bool branch_taken_0x1f2d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D00u;
        // 0x1f2d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d00) {
            ctx->pc = 0x1F2E0Cu;
            goto label_1f2e0c;
        }
    }
    ctx->pc = 0x1F2D08u;
    // 0x1f2d08: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1f2d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1f2d0c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1f2d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1f2d10: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f2d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f2d14: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F2D14u;
    {
        const bool branch_taken_0x1f2d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D14u;
        // 0x1f2d18: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d14) {
            ctx->pc = 0x1F2D80u;
            goto label_1f2d80;
        }
    }
    ctx->pc = 0x1F2D1Cu;
    // 0x1f2d1c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f2d20: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1f2d24:
    // 0x1f2d24: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1f2d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f2d28: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1f2d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f2d2c: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x1f2d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f2d30: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x1f2d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f2d34: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x1f2d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f2d38: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x1f2d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f2d3c: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x1f2d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1f2d40: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x1f2d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1f2d44: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1f2d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2d48: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1f2d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2d4c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1f2d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2d50: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1f2d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2d54: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1f2d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2d58: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1f2d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2d5c: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1f2d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2d60: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1f2d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2d64: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1f2d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1f2d68: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f2d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2d6c: 0x0  nop
    ctx->pc = 0x1f2d6cu;
    // NOP
    // 0x1f2d70: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F2D70u;
    {
        const bool branch_taken_0x1f2d70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2d70) {
            ctx->pc = 0x1F2D24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2d24;
        }
    }
    ctx->pc = 0x1F2D78u;
    // 0x1f2d78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F2D78u;
    {
        const bool branch_taken_0x1f2d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d78) {
            ctx->pc = 0x1F2DBCu;
            goto label_1f2dbc;
        }
    }
    ctx->pc = 0x1F2D80u;
label_1f2d80:
    // 0x1f2d80: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1f2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1f2d84: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f2d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1f2d88:
    // 0x1f2d88: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1f2d88u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f2d8c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1f2d8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f2d90: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1f2d90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1f2d94: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1f2d94u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1f2d98: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1f2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1f2d9c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1f2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1f2da0: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1f2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1f2da4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1f2da4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1f2da8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1f2da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1f2dac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f2dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2db0: 0x0  nop
    ctx->pc = 0x1f2db0u;
    // NOP
    // 0x1f2db4: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F2DB4u;
    {
        const bool branch_taken_0x1f2db4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2db4) {
            ctx->pc = 0x1F2D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2d88;
        }
    }
    ctx->pc = 0x1F2DBCu;
label_1f2dbc:
    // 0x1f2dbc: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1f2dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1f2dc0: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1f2dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1f2dc4: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x1f2dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1f2dc8: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x1f2dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1f2dcc: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1f2dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f2dd0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1f2dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f2dd4: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x1f2dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1f2dd8: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x1f2dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1f2ddc: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x1f2ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2de0: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x1f2de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2de4: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x1f2de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2de8: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x1f2de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2dec: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x1f2decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2df0: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x1f2df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2df4: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x1f2df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f2df8: 0x26a3fb80  addiu       $v1, $s5, -0x480
    ctx->pc = 0x1f2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966144));
    // 0x1f2dfc: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1f2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1f2e00: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x1f2e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f2e04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2E04u;
    {
        const bool branch_taken_0x1f2e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E04u;
        // 0x1f2e08: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e04) {
            ctx->pc = 0x1F2E28u;
            goto label_1f2e28;
        }
    }
    ctx->pc = 0x1F2E0Cu;
label_1f2e0c:
    // 0x1f2e0c: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1f2e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1f2e10: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F2E10u;
    SET_GPR_U32(ctx, 31, 0x1F2E18u);
    ctx->pc = 0x1F2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E10u;
    // 0x1f2e14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F2E10u, 0x1F2E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E18u;
label_1f2e18:
    // 0x1f2e18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2E18u;
    {
        const bool branch_taken_0x1f2e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E18u;
        // 0x1f2e1c: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e18) {
            ctx->pc = 0x1F2E24u;
            goto label_1f2e24;
        }
    }
    ctx->pc = 0x1F2E20u;
label_1f2e20:
    // 0x1f2e20: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1f2e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1f2e24:
    // 0x1f2e24: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1f2e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1f2e28:
    // 0x1f2e28: 0x26b0fb80  addiu       $s0, $s5, -0x480
    ctx->pc = 0x1f2e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966144));
    // 0x1f2e2c: 0x24a4fd80  addiu       $a0, $a1, -0x280
    ctx->pc = 0x1f2e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966656));
    // 0x1f2e30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2e34: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f2e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f2e38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e3c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f2e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e40: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1f2e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f2e44: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f2e44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e48: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1f2e48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f2e4c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2E4Cu;
    SET_GPR_U32(ctx, 31, 0x1F2E54u);
    ctx->pc = 0x1F2E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E4Cu;
    // 0x1f2e50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2E4Cu, 0x1F2E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E54u;
label_1f2e54:
    // 0x1f2e54: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2E54u;
    {
        const bool branch_taken_0x1f2e54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f2e54) {
            ctx->pc = 0x1F2E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2E54u;
            // 0x1f2e58: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2E68u;
            goto label_1f2e68;
        }
    }
    ctx->pc = 0x1F2E5Cu;
    // 0x1f2e5c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f2e60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2E60u;
    {
        const bool branch_taken_0x1f2e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E60u;
        // 0x1f2e64: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e60) {
            ctx->pc = 0x1F2E70u;
            goto label_1f2e70;
        }
    }
    ctx->pc = 0x1F2E68u;
label_1f2e68:
    // 0x1f2e68: 0x8e82fb80  lw          $v0, -0x480($s4)
    ctx->pc = 0x1f2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966144)));
    // 0x1f2e6c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1f2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_1f2e70:
    // 0x1f2e70: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f2e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f2e74: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f2e74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f2e78: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f2e78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f2e7c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f2e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2e80: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f2e80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2e84: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f2e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2e88: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f2e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2e8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f2e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E90u;
        // 0x1f2e94: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2E98u;
}
