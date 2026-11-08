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

// Function: FUN_001d3c40
// Address: 0x1d3c40 - 0x1d3d9c
void FUN_001d3c40_0x1d3c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3c40_0x1d3c40");
#endif

    switch (ctx->pc) {
        case 0x1d3c64u: goto label_1d3c64;
        case 0x1d3cc4u: goto label_1d3cc4;
        case 0x1d3d68u: goto label_1d3d68;
        default: break;
    }

    ctx->pc = 0x1d3c40u;

    // 0x1d3c40: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1d3c40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3c48: 0x25440028  addiu       $a0, $t2, 0x28
    ctx->pc = 0x1d3c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
    // 0x1d3c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3c50: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1d3c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d3c54: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1d3c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1d3c58: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D3C58u;
    {
        const bool branch_taken_0x1d3c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C58u;
        // 0x1d3c5c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c58) {
            ctx->pc = 0x1D3CC0u;
            goto label_1d3cc0;
        }
    }
    ctx->pc = 0x1D3C60u;
    // 0x1d3c60: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x1d3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_1d3c64:
    // 0x1d3c64: 0x686b0007  ldl         $t3, 0x7($v1)
    ctx->pc = 0x1d3c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1d3c68: 0x6c6b0000  ldr         $t3, 0x0($v1)
    ctx->pc = 0x1d3c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1d3c6c: 0x686c000f  ldl         $t4, 0xF($v1)
    ctx->pc = 0x1d3c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x1d3c70: 0x6c6c0008  ldr         $t4, 0x8($v1)
    ctx->pc = 0x1d3c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x1d3c74: 0x686d0017  ldl         $t5, 0x17($v1)
    ctx->pc = 0x1d3c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x1d3c78: 0x6c6d0010  ldr         $t5, 0x10($v1)
    ctx->pc = 0x1d3c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x1d3c7c: 0x686e001f  ldl         $t6, 0x1F($v1)
    ctx->pc = 0x1d3c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x1d3c80: 0x6c6e0018  ldr         $t6, 0x18($v1)
    ctx->pc = 0x1d3c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x1d3c84: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x1d3c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3c88: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x1d3c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3c8c: 0xb08c000f  sdl         $t4, 0xF($a0)
    ctx->pc = 0x1d3c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3c90: 0xb48c0008  sdr         $t4, 0x8($a0)
    ctx->pc = 0x1d3c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3c94: 0xb08d0017  sdl         $t5, 0x17($a0)
    ctx->pc = 0x1d3c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3c98: 0xb48d0010  sdr         $t5, 0x10($a0)
    ctx->pc = 0x1d3c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3c9c: 0xb08e001f  sdl         $t6, 0x1F($a0)
    ctx->pc = 0x1d3c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ca0: 0xb48e0018  sdr         $t6, 0x18($a0)
    ctx->pc = 0x1d3ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3ca4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d3ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d3ca8: 0x0  nop
    ctx->pc = 0x1d3ca8u;
    // NOP
    // 0x1d3cac: 0x0  nop
    ctx->pc = 0x1d3cacu;
    // NOP
    // 0x1d3cb0: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D3CB0u;
    {
        const bool branch_taken_0x1d3cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CB0u;
        // 0x1d3cb4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cb0) {
            ctx->pc = 0x1D3C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3c64;
        }
    }
    ctx->pc = 0x1D3CB8u;
    // 0x1d3cb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D3CB8u;
    {
        const bool branch_taken_0x1d3cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3cb8) {
            ctx->pc = 0x1D3CF8u;
            goto label_1d3cf8;
        }
    }
    ctx->pc = 0x1D3CC0u;
label_1d3cc0:
    // 0x1d3cc0: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_1d3cc4:
    // 0x1d3cc4: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x1d3cc4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3cc8: 0xdc6c0008  ld          $t4, 0x8($v1)
    ctx->pc = 0x1d3cc8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d3ccc: 0xdc6d0010  ld          $t5, 0x10($v1)
    ctx->pc = 0x1d3cccu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d3cd0: 0xdc6e0018  ld          $t6, 0x18($v1)
    ctx->pc = 0x1d3cd0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1d3cd4: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x1d3cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x1d3cd8: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1d3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1d3cdc: 0xfc8d0010  sd          $t5, 0x10($a0)
    ctx->pc = 0x1d3cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 13));
    // 0x1d3ce0: 0xfc8e0018  sd          $t6, 0x18($a0)
    ctx->pc = 0x1d3ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 14));
    // 0x1d3ce4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d3ce8: 0x0  nop
    ctx->pc = 0x1d3ce8u;
    // NOP
    // 0x1d3cec: 0x0  nop
    ctx->pc = 0x1d3cecu;
    // NOP
    // 0x1d3cf0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D3CF0u;
    {
        const bool branch_taken_0x1d3cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CF0u;
        // 0x1d3cf4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cf0) {
            ctx->pc = 0x1D3CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3cc4;
        }
    }
    ctx->pc = 0x1D3CF8u;
label_1d3cf8:
    // 0x1d3cf8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x1d3cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d3cfc: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x1d3cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d3d00: 0x686b000f  ldl         $t3, 0xF($v1)
    ctx->pc = 0x1d3d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1d3d04: 0x6c6b0008  ldr         $t3, 0x8($v1)
    ctx->pc = 0x1d3d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1d3d08: 0x686c0017  ldl         $t4, 0x17($v1)
    ctx->pc = 0x1d3d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x1d3d0c: 0x6c6c0010  ldr         $t4, 0x10($v1)
    ctx->pc = 0x1d3d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x1d3d10: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x1d3d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d14: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x1d3d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d18: 0xb08b000f  sdl         $t3, 0xF($a0)
    ctx->pc = 0x1d3d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d1c: 0xb48b0008  sdr         $t3, 0x8($a0)
    ctx->pc = 0x1d3d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d20: 0xb08c0017  sdl         $t4, 0x17($a0)
    ctx->pc = 0x1d3d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d24: 0xb48c0010  sdr         $t4, 0x10($a0)
    ctx->pc = 0x1d3d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d3d28: 0x240b0064  addiu       $t3, $zero, 0x64
    ctx->pc = 0x1d3d28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d3d2c: 0xad460230  sw          $a2, 0x230($t2)
    ctx->pc = 0x1d3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 560), GPR_U32(ctx, 6));
    // 0x1d3d30: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1d3d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d3d34: 0xad470234  sw          $a3, 0x234($t2)
    ctx->pc = 0x1d3d34u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 564), GPR_U32(ctx, 7));
    // 0x1d3d38: 0x25440250  addiu       $a0, $t2, 0x250
    ctx->pc = 0x1d3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 592));
    // 0x1d3d3c: 0xad480238  sw          $t0, 0x238($t2)
    ctx->pc = 0x1d3d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 568), GPR_U32(ctx, 8));
    // 0x1d3d40: 0xad49023c  sw          $t1, 0x23C($t2)
    ctx->pc = 0x1d3d40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 572), GPR_U32(ctx, 9));
    // 0x1d3d44: 0xad4002d8  sw          $zero, 0x2D8($t2)
    ctx->pc = 0x1d3d44u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 728), GPR_U32(ctx, 0));
    // 0x1d3d48: 0xad4002dc  sw          $zero, 0x2DC($t2)
    ctx->pc = 0x1d3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 732), GPR_U32(ctx, 0));
    // 0x1d3d4c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1d3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d3d50: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1d3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1d3d54: 0xad420240  sw          $v0, 0x240($t2)
    ctx->pc = 0x1d3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 576), GPR_U32(ctx, 2));
    // 0x1d3d58: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1d3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1d3d5c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x1d3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1d3d60: 0xad430244  sw          $v1, 0x244($t2)
    ctx->pc = 0x1d3d60u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 580), GPR_U32(ctx, 3));
    // 0x1d3d64: 0x0  nop
    ctx->pc = 0x1d3d64u;
    // NOP
label_1d3d68:
    // 0x1d3d68: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d3d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d3d6c: 0xac8bfffc  sw          $t3, -0x4($a0)
    ctx->pc = 0x1d3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 11));
    // 0x1d3d70: 0xac8b0000  sw          $t3, 0x0($a0)
    ctx->pc = 0x1d3d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 11));
    // 0x1d3d74: 0x0  nop
    ctx->pc = 0x1d3d74u;
    // NOP
    // 0x1d3d78: 0x0  nop
    ctx->pc = 0x1d3d78u;
    // NOP
    // 0x1d3d7c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D3D7Cu;
    {
        const bool branch_taken_0x1d3d7c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D7Cu;
        // 0x1d3d80: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d7c) {
            ctx->pc = 0x1D3D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3d68;
        }
    }
    ctx->pc = 0x1D3D84u;
    // 0x1d3d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d88: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1d3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d3d8c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1d3d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d90: 0xad4202cc  sw          $v0, 0x2CC($t2)
    ctx->pc = 0x1d3d90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 716), GPR_U32(ctx, 2));
    // 0x1d3d94: 0x8074eee  j           func_1D3BB8
    ctx->pc = 0x1D3D94u;
    ctx->pc = 0x1D3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D94u;
    // 0x1d3d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BB8u;
    entry_001d3bb8_0x1d3bb8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3D9Cu;
}
