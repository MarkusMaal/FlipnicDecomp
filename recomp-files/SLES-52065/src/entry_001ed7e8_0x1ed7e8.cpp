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

// Function: entry_001ed7e8
// Address: 0x1ed7e8 - 0x1ed850
void entry_001ed7e8_0x1ed7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed7e8_0x1ed7e8");
#endif

    ctx->pc = 0x1ed7e8u;

    // 0x1ed7e8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1ed7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1ed7ec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ed7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ed7f0: 0x24a5c780  addiu       $a1, $a1, -0x3880
    ctx->pc = 0x1ed7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952832));
    // 0x1ed7f4: 0x2666c700  addiu       $a2, $s3, -0x3900
    ctx->pc = 0x1ed7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952704));
    // 0x1ed7f8: 0x3c120039  lui         $s2, 0x39
    ctx->pc = 0x1ed7f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
    // 0x1ed7fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ed7fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1ed800: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ed800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1ed804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ed804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed808: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1ed808u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1ed80c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ed80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ed810: 0x2642c7d8  addiu       $v0, $s2, -0x3828
    ctx->pc = 0x1ed810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952920));
    // 0x1ed814: 0xad43a3c8  sw          $v1, -0x5C38($t2)
    ctx->pc = 0x1ed814u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294943688), GPR_U32(ctx, 3));
    // 0x1ed818: 0x2528c800  addiu       $t0, $t1, -0x3800
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952960));
    // 0x1ed81c: 0xae46c7d8  sw          $a2, -0x3828($s2)
    ctx->pc = 0x1ed81cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x38C7D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7D8u, _value); } while (0);
    // 0x1ed820: 0x2484c900  addiu       $a0, $a0, -0x3700
    ctx->pc = 0x1ed820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953216));
    // 0x1ed824: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1ed824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ed828: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1ed828u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x38C7F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7F4u, _value); } while (0);
    // 0x1ed82c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1ed82cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x38C7DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7DCu, _value); } while (0);
    // 0x1ed830: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1ed830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed834: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1ed834u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x38C7E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7E8u, _value); } while (0);
    // 0x1ed838: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1ed838u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1ed83c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ed83cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38C7E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7E0u, _value); } while (0);
    // 0x1ed840: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1ed840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ed844: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1ed844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x38C7E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7E4u, _value); } while (0);
    // 0x1ed848: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1ed848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38C7ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7ECu, _value); } while (0);
    // 0x1ed84c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1ed84cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x38C7F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38C7F0u, _value); } while (0);
    ctx->pc = 0x1ed850u;
}
