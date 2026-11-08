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

// Function: FUN_001f69f8
// Address: 0x1f69f8 - 0x1f6ac4
void FUN_001f69f8_0x1f69f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f69f8_0x1f69f8");
#endif

    switch (ctx->pc) {
        case 0x1f6a78u: goto label_1f6a78;
        case 0x1f6aa4u: goto label_1f6aa4;
        default: break;
    }

    ctx->pc = 0x1f69f8u;

    // 0x1f69f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f69f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f69fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6a00: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f6a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f6a04: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1f6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f6a08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f6a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f6a0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f6a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a10: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x1f6a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1f6a14: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f6a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f6a18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f6a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f6a1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f6a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a20: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1f6a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3912C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C4u, _value); } while (0);
    // 0x1f6a24: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f6a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f6a28: 0xac4312c0  sw          $v1, 0x12C0($v0)
    ctx->pc = 0x1f6a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3912C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C0u, _value); } while (0);
    // 0x1f6a2c: 0x24841080  addiu       $a0, $a0, 0x1080
    ctx->pc = 0x1f6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x1f6a30: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1f6a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3912C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3912C8u, _value); } while (0);
    // 0x1f6a34: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6a34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6a38: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1f6a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f6a3c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1f6a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f6a40: 0x88c3000b  lwl         $v1, 0xB($a2)
    ctx->pc = 0x1f6a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1f6a44: 0x98c30008  lwr         $v1, 0x8($a2)
    ctx->pc = 0x1f6a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1f6a48: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x1f6a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f6a4c: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x1f6a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f6a50: 0xaa030017  swl         $v1, 0x17($s0)
    ctx->pc = 0x1f6a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f6a54: 0xba030014  swr         $v1, 0x14($s0)
    ctx->pc = 0x1f6a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f6a58: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f6a58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6a60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f6a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f6a64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a6c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f6a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6a70: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F6A70u;
    SET_GPR_U32(ctx, 31, 0x1F6A78u);
    ctx->pc = 0x1F6A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A70u;
    // 0x1f6a74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F6A70u, 0x1F6A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A78u;
label_1f6a78:
    // 0x1f6a78: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6A78u;
    {
        const bool branch_taken_0x1f6a78 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f6a78) {
            ctx->pc = 0x1F6A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6A78u;
            // 0x1f6a7c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6A88u;
            goto label_1f6a88;
        }
    }
    ctx->pc = 0x1F6A80u;
    // 0x1f6a80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F6A80u;
    {
        const bool branch_taken_0x1f6a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A80u;
        // 0x1f6a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a80) {
            ctx->pc = 0x1F6AACu;
            goto label_1f6aac;
        }
    }
    ctx->pc = 0x1F6A88u;
label_1f6a88:
    // 0x1f6a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6a8c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6A8Cu;
    {
        const bool branch_taken_0x1f6a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A8Cu;
        // 0x1f6a90: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a8c) {
            ctx->pc = 0x1F6AACu;
            goto label_1f6aac;
        }
    }
    ctx->pc = 0x1F6A94u;
    // 0x1f6a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a9c: 0xc07d832  jal         func_1F60C8
    ctx->pc = 0x1F6A9Cu;
    SET_GPR_U32(ctx, 31, 0x1F6AA4u);
    ctx->pc = 0x1F6AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A9Cu;
    // 0x1f6aa0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F60C8u, 0x1F6A9Cu, 0x1F6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AA4u;
label_1f6aa4:
    // 0x1f6aa4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1f6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f6aa8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f6aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f6aac:
    // 0x1f6aac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f6aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6ab0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f6ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6ab4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f6ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6ab8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f6ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ABCu;
        // 0x1f6ac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6AC4u;
}
