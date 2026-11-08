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

// Function: entry_00180840
// Address: 0x180840 - 0x180994
void entry_00180840_0x180840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180840_0x180840");
#endif

    switch (ctx->pc) {
        case 0x18098cu: goto label_18098c;
        default: break;
    }

    ctx->pc = 0x180840u;

    // 0x180840: 0x83838678  lb          $v1, -0x7988($gp)
    ctx->pc = 0x180840u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x180844: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x180844u;
    {
        const bool branch_taken_0x180844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x180848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180844u;
        // 0x180848: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180844) {
            ctx->pc = 0x180994u;
            return;
        }
    }
    ctx->pc = 0x18084Cu;
    // 0x18084c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x18084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180850: 0xa0208862  sb          $zero, -0x779E($at)
    ctx->pc = 0x180850u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936674), (uint8_t)GPR_U32(ctx, 0));
    // 0x180854: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x180854u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x180858: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x180858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18085c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18085cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180860: 0xa0228863  sb          $v0, -0x779D($at)
    ctx->pc = 0x180860u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368863u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368863u, _value); } while (0);
    // 0x180864: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x180864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x180868: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x180868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18086c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18086cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180870: 0xa4228860  sh          $v0, -0x77A0($at)
    ctx->pc = 0x180870u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368860u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368860u, _value); } while (0);
    // 0x180874: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x180874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x180878: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x180878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18087c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18087cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180880: 0xac228868  sw          $v0, -0x7798($at)
    ctx->pc = 0x180880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368868u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368868u, _value); } while (0);
    // 0x180884: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x180884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x180888: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18088c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18088cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x180890: 0xac208864  sw          $zero, -0x779C($at)
    ctx->pc = 0x180890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x368864u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368864u, _value); } while (0);
    // 0x180894: 0xe82025  or          $a0, $a3, $t0
    ctx->pc = 0x180894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x180898: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x180898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x18089c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18089cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808a0: 0xac22886c  sw          $v0, -0x7794($at)
    ctx->pc = 0x1808a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36886Cu, _value); } while (0);
    // 0x1808a4: 0x70874389  pcpyld      $t0, $a0, $a3
    ctx->pc = 0x1808a4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x1808a8: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1808a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1808ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1808acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1808b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1808b4: 0x300c3fff  andi        $t4, $zero, 0x3FFF
    ctx->pc = 0x1808b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)16383);
    // 0x1808b8: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1808b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1808bc: 0x64060100  daddiu      $a2, $zero, 0x100
    ctx->pc = 0x1808bcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)256);
    // 0x1808c0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1808c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1808c4: 0xfc238870  sd          $v1, -0x7790($at)
    ctx->pc = 0x1808c4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936688), GPR_U64(ctx, 3));
    // 0x1808c8: 0x24025353  addiu       $v0, $zero, 0x5353
    ctx->pc = 0x1808c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x1808cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1808ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808d0: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x1808d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1808d4: 0xfc228878  sd          $v0, -0x7788($at)
    ctx->pc = 0x1808d4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368878u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368878u, _value); } while (0);
    // 0x1808d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1808d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808dc: 0x64020010  daddiu      $v0, $zero, 0x10
    ctx->pc = 0x1808dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1808e0: 0x942b8880  lhu         $t3, -0x7780($at)
    ctx->pc = 0x1808e0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294936704)));
    // 0x1808e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1808e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1808e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1808e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808ec: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1808ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1808f0: 0x942a8882  lhu         $t2, -0x777E($at)
    ctx->pc = 0x1808f0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294936706)));
    // 0x1808f4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1808f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1808f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1808f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1808fc: 0x1433824  and         $a3, $t2, $v1
    ctx->pc = 0x1808fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x180900: 0xdc298888  ld          $t1, -0x7778($at)
    ctx->pc = 0x180900u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 1), 4294936712)));
    // 0x180904: 0xec3825  or          $a3, $a3, $t4
    ctx->pc = 0x180904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x180908: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18090c: 0x94258890  lhu         $a1, -0x7770($at)
    ctx->pc = 0x18090cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x368890u));
    // 0x180910: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180914: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x180914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x180918: 0x94248892  lhu         $a0, -0x776E($at)
    ctx->pc = 0x180918u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294936722)));
    // 0x18091c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x18091cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x180920: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180924: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x180924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x180928: 0xa42b8880  sh          $t3, -0x7780($at)
    ctx->pc = 0x180928u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294936704), (uint16_t)GPR_U32(ctx, 11));
    // 0x18092c: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x18092cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x180930: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180934: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x180934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x180938: 0xa4278882  sh          $a3, -0x777E($at)
    ctx->pc = 0x180938u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368882u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368882u, _value); } while (0);
    // 0x18093c: 0x24c68850  addiu       $a2, $a2, -0x77B0
    ctx->pc = 0x18093cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936656));
    // 0x180940: 0x1283824  and         $a3, $t1, $t0
    ctx->pc = 0x180940u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x180944: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180948: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x180948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18094c: 0xfc278888  sd          $a3, -0x7778($at)
    ctx->pc = 0x18094cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 7)); ps2TraceGuestWrite(rdram, 0x368888u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368888u, _value); } while (0);
    // 0x180950: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180954: 0xa4258890  sh          $a1, -0x7770($at)
    ctx->pc = 0x180954u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368890u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368890u, _value); } while (0);
    // 0x180958: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18095c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x18095cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x180960: 0xdc238898  ld          $v1, -0x7768($at)
    ctx->pc = 0x180960u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x368898u));
    // 0x180964: 0x24a50a40  addiu       $a1, $a1, 0xA40
    ctx->pc = 0x180964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2624));
    // 0x180968: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18096c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x18096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x180970: 0xa4248892  sh          $a0, -0x776E($at)
    ctx->pc = 0x180970u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294936722), (uint16_t)GPR_U32(ctx, 4));
    // 0x180974: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180978: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x180978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x18097c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18097cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180980: 0x24848860  addiu       $a0, $a0, -0x77A0
    ctx->pc = 0x180980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936672));
    // 0x180984: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x180984u;
    SET_GPR_U32(ctx, 31, 0x18098Cu);
    ctx->pc = 0x180988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180984u;
    // 0x180988: 0xfc228898  sd          $v0, -0x7768($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936728), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x180984u, 0x18098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18098Cu;
label_18098c:
    // 0x18098c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18098cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180990: 0xa3838678  sb          $v1, -0x7988($gp)
    ctx->pc = 0x180990u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936184), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x180994u;
}
