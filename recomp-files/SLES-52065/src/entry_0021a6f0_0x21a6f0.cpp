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

// Function: entry_0021a6f0
// Address: 0x21a6f0 - 0x21a750
void entry_0021a6f0_0x21a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a6f0_0x21a6f0");
#endif

    ctx->pc = 0x21a6f0u;

    // 0x21a6f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x21a6f4: 0x26041000  addiu       $a0, $s0, 0x1000
    ctx->pc = 0x21a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
    // 0x21a6f8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x21a6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x21a6fc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x21a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x21a700: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x21a700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x21a704: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21a704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21a708: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x21a708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x21a70c: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x21a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x21a710: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x21a710u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x21a714: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x21a714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x21a718: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x21a718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x21a71c: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x21a71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x21a720: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x21a720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x21a724: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x21a724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x21a728: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x21a728u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
    // 0x21a72c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21a72cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a730: 0x40832800  mtc0        $v1, PageMask
    ctx->pc = 0x21a730u;
    ctx->cop0_pagemask = GPR_U32(ctx, 3) & 0x01FFE000;
    // 0x21a734: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x21a734u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
    // 0x21a738: 0x40821000  mtc0        $v0, EntryLo0
    ctx->pc = 0x21a738u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 2) & 0x3FFFFFFF;
    // 0x21a73c: 0x40841800  mtc0        $a0, EntryLo1
    ctx->pc = 0x21a73cu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 4) & 0x3FFFFFFF;
    // 0x21a740: 0x40f  sync.p
    ctx->pc = 0x21a740u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a744: 0x42000002  tlbwi
    ctx->pc = 0x21a744u;
    runtime->handleTLBWI(rdram, ctx);
    // 0x21a748: 0x40f  sync.p
    ctx->pc = 0x21a748u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a74c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21a74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21a750u;
}
