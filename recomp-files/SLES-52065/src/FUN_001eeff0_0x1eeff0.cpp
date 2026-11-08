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

// Function: FUN_001eeff0
// Address: 0x1eeff0 - 0x1ef394
void FUN_001eeff0_0x1eeff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eeff0_0x1eeff0");
#endif

    switch (ctx->pc) {
        case 0x1ef08cu: goto label_1ef08c;
        case 0x1ef0e0u: goto label_1ef0e0;
        case 0x1ef108u: goto label_1ef108;
        case 0x1ef130u: goto label_1ef130;
        case 0x1ef188u: goto label_1ef188;
        case 0x1ef1e4u: goto label_1ef1e4;
        case 0x1ef308u: goto label_1ef308;
        case 0x1ef310u: goto label_1ef310;
        case 0x1ef314u: goto label_1ef314;
        case 0x1ef34cu: goto label_1ef34c;
        case 0x1ef384u: goto label_1ef384;
        default: break;
    }

    ctx->pc = 0x1eeff0u;

    // 0x1eeff0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1eeff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1eeff4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eeff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eeff8: 0x8c43a460  lw          $v1, -0x5BA0($v0)
    ctx->pc = 0x1eeff8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A460u));
    // 0x1eeffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eeffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef000: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ef000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ef004: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF004u;
    {
        const bool branch_taken_0x1ef004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF004u;
        // 0x1ef008: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef004) {
            ctx->pc = 0x1EF010u;
            goto label_1ef010;
        }
    }
    ctx->pc = 0x1EF00Cu;
    // 0x1ef00c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1ef00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ef010:
    // 0x1ef010: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x1ef010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x1ef014: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ef014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ef018: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1ef018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ef01c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ef01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ef020: 0xac45a458  sw          $a1, -0x5BA8($v0)
    ctx->pc = 0x1ef020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943832), GPR_U32(ctx, 5));
    // 0x1ef024: 0x2484ee80  addiu       $a0, $a0, -0x1180
    ctx->pc = 0x1ef024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962816));
    // 0x1ef028: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1ef028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1ef02c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ef02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ef030: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x1ef030u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1ef034: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x1ef034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1ef038: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x1ef038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1ef03c: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x1ef03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef040: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x1ef040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef044: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x1ef044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x1ef048: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x1ef048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x1ef04c: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x1ef04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef050: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x1ef050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef054: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x1ef054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1ef058: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x1ef058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1ef05c: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x1ef05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef060: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x1ef060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef064: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x1ef064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1ef068: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x1ef068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1ef06c: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x1ef06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef070: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x1ef070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef074: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ef074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef078: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF078u;
    {
        const bool branch_taken_0x1ef078 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF078u;
        // 0x1ef07c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef078) {
            ctx->pc = 0x1EF08Cu;
            goto label_1ef08c;
        }
    }
    ctx->pc = 0x1EF080u;
    // 0x1ef080: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1ef080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ef084: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1EF084u;
    SET_GPR_U32(ctx, 31, 0x1EF08Cu);
    ctx->pc = 0x1EF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF084u;
    // 0x1ef088: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1EF084u, 0x1EF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF08Cu;
label_1ef08c:
    // 0x1ef08c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ef08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ef090: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1ef094: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x1ef094u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1ef098: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x1EF098u;
    {
        const bool branch_taken_0x1ef098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF098u;
        // 0x1ef09c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef098) {
            ctx->pc = 0x1EF310u;
            goto label_1ef310;
        }
    }
    ctx->pc = 0x1EF0A0u;
    // 0x1ef0a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ef0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ef0a4: 0x244243d0  addiu       $v0, $v0, 0x43D0
    ctx->pc = 0x1ef0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x1ef0a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ef0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ef0ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ef0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef0b0: 0x800008  jr          $a0
    ctx->pc = 0x1EF0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF0B8u: goto label_1ef0b8;
            case 0x1EF160u: goto label_1ef160;
            case 0x1EF22Cu: goto label_1ef22c;
            case 0x1EF2C8u: goto label_1ef2c8;
            case 0x1EF310u: goto label_1ef310;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF0B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EF0B8u;
label_1ef0b8:
    // 0x1ef0b8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1ef0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ef0bc: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF0BCu;
    {
        const bool branch_taken_0x1ef0bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0BCu;
        // 0x1ef0c0: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0bc) {
            ctx->pc = 0x1EF108u;
            goto label_1ef108;
        }
    }
    ctx->pc = 0x1EF0C4u;
    // 0x1ef0c4: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x1ef0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ef0c8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ef0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ef0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef0d0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EF0D0u;
    {
        const bool branch_taken_0x1ef0d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0D0u;
        // 0x1ef0d4: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0d0) {
            ctx->pc = 0x1EF108u;
            goto label_1ef108;
        }
    }
    ctx->pc = 0x1EF0D8u;
    // 0x1ef0d8: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x1ef0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1ef0dc: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x1ef0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1ef0e0:
    // 0x1ef0e0: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x1ef0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1ef0e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ef0e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef0e8: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x1ef0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1ef0ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ef0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ef0f0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1ef0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef0f4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ef0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef0f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1ef0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ef0fc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ef0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ef100: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EF100u;
    {
        const bool branch_taken_0x1ef100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF100u;
        // 0x1ef104: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef100) {
            ctx->pc = 0x1EF0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef0e0;
        }
    }
    ctx->pc = 0x1EF108u;
label_1ef108:
    // 0x1ef108: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1ef108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ef10c: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x1EF10Cu;
    {
        const bool branch_taken_0x1ef10c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF10Cu;
        // 0x1ef110: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef10c) {
            ctx->pc = 0x1EF310u;
            goto label_1ef310;
        }
    }
    ctx->pc = 0x1EF114u;
    // 0x1ef114: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x1ef114u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1ef118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef11c: 0x1860007c  blez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x1EF11Cu;
    {
        const bool branch_taken_0x1ef11c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EF120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF11Cu;
        // 0x1ef120: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef11c) {
            ctx->pc = 0x1EF310u;
            goto label_1ef310;
        }
    }
    ctx->pc = 0x1EF124u;
    // 0x1ef124: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x1ef124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1ef128: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x1ef128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1ef12c: 0x0  nop
    ctx->pc = 0x1ef12cu;
    // NOP
label_1ef130:
    // 0x1ef130: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x1ef130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1ef134: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ef134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef138: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x1ef138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1ef13c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ef13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ef140: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1ef140u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef144: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ef144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef148: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1ef148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ef14c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ef14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ef150: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EF150u;
    {
        const bool branch_taken_0x1ef150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF150u;
        // 0x1ef154: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef150) {
            ctx->pc = 0x1EF130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef130;
        }
    }
    ctx->pc = 0x1EF158u;
    // 0x1ef158: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1EF158u;
    {
        const bool branch_taken_0x1ef158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF158u;
        // 0x1ef15c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef158) {
            ctx->pc = 0x1EF314u;
            goto label_1ef314;
        }
    }
    ctx->pc = 0x1EF160u;
label_1ef160:
    // 0x1ef160: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x1ef160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1ef164: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x1ef164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1ef168: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x1ef168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef16c: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x1ef16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef170: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1ef170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1ef174: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1ef174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef178: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x1ef178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1ef17c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ef17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1ef180: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EF180u;
    {
        const bool branch_taken_0x1ef180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF180u;
        // 0x1ef184: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef180) {
            ctx->pc = 0x1EF1E4u;
            goto label_1ef1e4;
        }
    }
    ctx->pc = 0x1EF188u;
label_1ef188:
    // 0x1ef188: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x1ef188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ef18c: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x1ef18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ef190: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x1ef190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ef194: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x1ef194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ef198: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x1ef198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ef19c: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x1ef19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ef1a0: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x1ef1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ef1a4: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x1ef1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ef1a8: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x1ef1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef1ac: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x1ef1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef1b0: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x1ef1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef1b4: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x1ef1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef1b8: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x1ef1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef1bc: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x1ef1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef1c0: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x1ef1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef1c4: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x1ef1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef1c8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ef1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ef1cc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1ef1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1ef1d0: 0x0  nop
    ctx->pc = 0x1ef1d0u;
    // NOP
    // 0x1ef1d4: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1EF1D4u;
    {
        const bool branch_taken_0x1ef1d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef1d4) {
            ctx->pc = 0x1EF188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef188;
        }
    }
    ctx->pc = 0x1EF1DCu;
    // 0x1ef1dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EF1DCu;
    {
        const bool branch_taken_0x1ef1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef1dc) {
            ctx->pc = 0x1EF218u;
            goto label_1ef218;
        }
    }
    ctx->pc = 0x1EF1E4u;
label_1ef1e4:
    // 0x1ef1e4: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x1ef1e4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef1e8: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1ef1e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ef1ec: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x1ef1ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ef1f0: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x1ef1f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1ef1f4: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x1ef1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x1ef1f8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1ef1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1ef1fc: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x1ef1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x1ef200: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x1ef200u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x1ef204: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ef204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ef208: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1ef208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1ef20c: 0x0  nop
    ctx->pc = 0x1ef20cu;
    // NOP
    // 0x1ef210: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EF210u;
    {
        const bool branch_taken_0x1ef210 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef210) {
            ctx->pc = 0x1EF1E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef1e4;
        }
    }
    ctx->pc = 0x1EF218u;
label_1ef218:
    // 0x1ef218: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x1ef218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1ef21c: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x1ef21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1ef220: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x1ef220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef224: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1EF224u;
    {
        const bool branch_taken_0x1ef224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF224u;
        // 0x1ef228: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef224) {
            ctx->pc = 0x1EF310u;
            goto label_1ef310;
        }
    }
    ctx->pc = 0x1EF22Cu;
label_1ef22c:
    // 0x1ef22c: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x1ef22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x1ef230: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x1ef230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x1ef234: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x1ef234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef238: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x1ef238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef23c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ef23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef240: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x1ef240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ef244: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x1ef244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ef248: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x1ef248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ef24c: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x1ef24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ef250: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x1ef250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ef254: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x1ef254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ef258: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x1ef258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ef25c: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x1ef25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ef260: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1ef260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef264: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1ef264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef268: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x1ef268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef26c: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x1ef26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef270: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x1ef270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef274: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x1ef274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef278: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x1ef278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef27c: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x1ef27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef280: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x1ef280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ef284: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x1ef284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ef288: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x1ef288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ef28c: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x1ef28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ef290: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x1ef290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ef294: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x1ef294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ef298: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x1ef298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ef29c: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x1ef29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ef2a0: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x1ef2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef2a4: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x1ef2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef2a8: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x1ef2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef2ac: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x1ef2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef2b0: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x1ef2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef2b4: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x1ef2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef2b8: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x1ef2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef2bc: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x1ef2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ef2c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1EF2C0u;
    {
        const bool branch_taken_0x1ef2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2C0u;
        // 0x1ef2c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2c0) {
            ctx->pc = 0x1EF314u;
            goto label_1ef314;
        }
    }
    ctx->pc = 0x1EF2C8u;
label_1ef2c8:
    // 0x1ef2c8: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x1ef2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1ef2cc: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x1ef2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1ef2d0: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x1ef2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef2d4: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x1ef2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef2d8: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x1ef2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1ef2dc: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x1ef2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1ef2e0: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x1ef2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef2e4: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x1ef2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ef2e8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1ef2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ef2ec: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x1ef2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1ef2f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF2F0u;
    {
        const bool branch_taken_0x1ef2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2F0u;
        // 0x1ef2f4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2f0) {
            ctx->pc = 0x1EF308u;
            goto label_1ef308;
        }
    }
    ctx->pc = 0x1EF2F8u;
    // 0x1ef2f8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1ef2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1ef2fc: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1ef2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1ef300: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ef300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1ef304: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ef304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef308:
    // 0x1ef308: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1EF308u;
    SET_GPR_U32(ctx, 31, 0x1EF310u);
    ctx->pc = 0x1EF30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF308u;
    // 0x1ef30c: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1EF308u, 0x1EF310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF310u;
label_1ef310:
    // 0x1ef310: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ef310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef314:
    // 0x1ef314: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF314u;
    {
        const bool branch_taken_0x1ef314 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1EF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF314u;
        // 0x1ef318: 0x3c070022  lui         $a3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef314) {
            ctx->pc = 0x1EF37Cu;
            goto label_1ef37c;
        }
    }
    ctx->pc = 0x1EF31Cu;
    // 0x1ef31c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1ef31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1ef320: 0x8ce3a3d8  lw          $v1, -0x5C28($a3)
    ctx->pc = 0x1ef320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943704)));
    // 0x1ef324: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ef324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef328: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ef328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ef32c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF32Cu;
    {
        const bool branch_taken_0x1ef32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1EF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF32Cu;
        // 0x1ef330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef32c) {
            ctx->pc = 0x1EF348u;
            goto label_1ef348;
        }
    }
    ctx->pc = 0x1EF334u;
    // 0x1ef334: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ef334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef338: 0xace2a3d8  sw          $v0, -0x5C28($a3)
    ctx->pc = 0x1ef338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943704), GPR_U32(ctx, 2));
    // 0x1ef33c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF33Cu;
    {
        const bool branch_taken_0x1ef33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF33Cu;
        // 0x1ef340: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef33c) {
            ctx->pc = 0x1EF388u;
            goto label_1ef388;
        }
    }
    ctx->pc = 0x1EF344u;
    // 0x1ef344: 0x0  nop
    ctx->pc = 0x1ef344u;
    // NOP
label_1ef348:
    // 0x1ef348: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ef348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ef34c:
    // 0x1ef34c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1ef34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ef350: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF350u;
    {
        const bool branch_taken_0x1ef350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF350u;
        // 0x1ef354: 0x24e2a3d8  addiu       $v0, $a3, -0x5C28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef350) {
            ctx->pc = 0x1EF384u;
            goto label_1ef384;
        }
    }
    ctx->pc = 0x1EF358u;
    // 0x1ef358: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ef358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ef35c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ef35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ef360: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ef360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef364: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EF364u;
    {
        const bool branch_taken_0x1ef364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1EF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF364u;
        // 0x1ef368: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef364) {
            ctx->pc = 0x1EF34Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef34c;
        }
    }
    ctx->pc = 0x1EF36Cu;
    // 0x1ef36c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ef36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef370: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ef374: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF374u;
    {
        const bool branch_taken_0x1ef374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF374u;
        // 0x1ef378: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef374) {
            ctx->pc = 0x1EF388u;
            goto label_1ef388;
        }
    }
    ctx->pc = 0x1EF37Cu;
label_1ef37c:
    // 0x1ef37c: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1EF37Cu;
    SET_GPR_U32(ctx, 31, 0x1EF384u);
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1EF37Cu, 0x1EF384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF384u;
label_1ef384:
    // 0x1ef384: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ef384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ef388:
    // 0x1ef388: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ef388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef38c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF38Cu;
        // 0x1ef390: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF394u;
}
