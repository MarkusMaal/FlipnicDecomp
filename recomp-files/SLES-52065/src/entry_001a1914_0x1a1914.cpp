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

// Function: entry_001a1914
// Address: 0x1a1914 - 0x1a1960
void entry_001a1914_0x1a1914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1914_0x1a1914");
#endif

    switch (ctx->pc) {
        case 0x1a1958u: goto label_1a1958;
        default: break;
    }

    ctx->pc = 0x1a1914u;

    // 0x1a1914: 0x0  nop
    ctx->pc = 0x1a1914u;
    // NOP
    // 0x1a1918: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a1918u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a191c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A191Cu;
    {
        const bool branch_taken_0x1a191c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a191c) {
            ctx->pc = 0x1A1900u;
            return;
        }
    }
    ctx->pc = 0x1A1924u;
    // 0x1a1924: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a1924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a1928: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A1928u;
    {
        const bool branch_taken_0x1a1928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1928) {
            ctx->pc = 0x1A1900u;
            return;
        }
    }
    ctx->pc = 0x1A1930u;
    // 0x1a1930: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x1a1930u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1934: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a1934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a1938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a193c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1a193cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a1940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1944: 0x8e8209d4  lw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a1944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
    // 0x1a1948: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a1948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a194c: 0x8e8209d0  lw          $v0, 0x9D0($s4)
    ctx->pc = 0x1a194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2512)));
    // 0x1a1950: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A1950u;
    SET_GPR_U32(ctx, 31, 0x1A1958u);
    ctx->pc = 0x1A1954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1950u;
    // 0x1a1954: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1950u, 0x1A1958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1958u;
label_1a1958:
    // 0x1a1958: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1958u;
    {
        const bool branch_taken_0x1a1958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1958u;
        // 0x1a195c: 0xc7808028  lwc1        $f0, -0x7FD8($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1958) {
            ctx->pc = 0x1A1988u;
            return;
        }
    }
    ctx->pc = 0x1A1960u;
}
