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

// Function: entry_001d3cf8
// Address: 0x1d3cf8 - 0x1d3d68
void entry_001d3cf8_0x1d3cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3cf8_0x1d3cf8");
#endif

    ctx->pc = 0x1d3cf8u;

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
    ctx->pc = 0x1d3d68u;
}
